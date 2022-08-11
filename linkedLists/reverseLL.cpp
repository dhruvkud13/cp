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

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nextt;
    while(curr!=NULL){
        nextt=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=nextt;
    }

    return prev;
    //this is our new head
}

node *reverseRecurive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead= reverseRecurive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
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
    display(head);
    // node* newhead=reverse(head);
    // display(newhead);
    node *newhead1=reverseRecurive(head);
    display(newhead1);
}


//iterative method
//3 pointers needed, prev,curr and next
// curr points to head
// prev points to null
// next points to curr->next
//we make curr next point to previous
// and increment the pointers, prev becomes curr,curr becomes next
// when curr reaches last node, we make curr next point to previous
// and increment
// finally curr reaches null
// so we have to break the loop
// we get head of this list with previous pointer

//recursive way
// head->next recursive func call
// we keep first node and do recursive call for rest of the list
// rest list gets reversed and we send new head back
// now we have to change only the first link
// we access second node through head->next 
// head->next->next=head
// second points to first and finally
// head->next is made null