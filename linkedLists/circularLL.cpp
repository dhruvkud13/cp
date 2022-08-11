#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        n->next=n; //n is our only node so next will have itself
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void deleteHead(node* &head){
    node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }

    node* todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int pos){
    node* temp=head;
    int count=0;
    if(pos==1){
        deleteHead(head);
        return;
    }
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
}

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
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
    insertAtHead(head,4);
    display(head);
    deletion(head,2);
    display(head);
    deleteHead(head);
    display(head);
}