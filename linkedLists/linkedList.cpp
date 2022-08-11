#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

class node{
    public:
    int data;
    node *next;

    //constructor
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node *&head,int key){
    node* temp=head;
    if(head==NULL){
        return;
    }
    //if list has only 1 node
    if(head->next==NULL){
        deleteHead(head);
        return;
    }
    while(temp->next->data!=key){
        temp=temp->next;
    }
    //node which is deleted cant be accessed so we make a node
    node* todelete=temp->next;
    temp->next=temp->next->next;
    //pointed n-1th node to n+1th node
    delete todelete;
}

//this func fails for first node as theres no n-1th node so we make deleteHead func

void insertAtPosition(node* &head,int val,int pos){
    node* newnode=new node(val);
    if(head==NULL){
        cout<<"linked list is empty cant insert"<<endl;
        return;
    }
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    node *temp=head;
    int count=0;
    while(count!=pos-1){
        count++;
        if(temp->next==NULL){
            cout<<"cant insert at position"<<endl;
            return;
        }
        temp=temp->next;
    }
    node* temp1= temp->next;
    temp->next=newnode;
    newnode->next=temp1;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,0);
    display(head);
    cout<<search(head,1)<<endl;
    cout<<search(head,5)<<endl;
    deletion(head,3);
    display(head);
    deleteHead(head);
    display(head);
    insertAtPosition(head,4,1);


    display(head);
}