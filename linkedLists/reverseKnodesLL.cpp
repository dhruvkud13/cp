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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reversek(node* &head,int k){
    node* prev=NULL;
    node* curr=head;
    node* nextt;
    int count=0;
    while(curr!=NULL && count<k){
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
        count++;
        //first k nodes get reversed
    }
    //now we do recursive call for head->next
    if(nextt!=NULL){
        head->next=reversek(nextt,k); //head->next is like pointing 1 to 4 (LL: 1-2-3-4-5-6,k=2) becomes(2-1 4-3-6-5)
    }
    return prev;
    //prev points to new head
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
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
}

// O(n) complexity as LL is traversed only once