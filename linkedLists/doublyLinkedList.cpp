#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n; 
}

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    //n->next already points to null
}

void deleteHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head,int position){
    if(position==1){
        deleteHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=position){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){ //means we arent at last node
        temp->next->prev=temp->prev;
    }
    

    delete temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
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
    display(head);
    insertAtHead(head,0);
    display(head);
    deletion(head,3);
    display(head);
    deleteHead(head);
    display(head);
}