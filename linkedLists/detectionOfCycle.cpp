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

void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;
    // while condition will be when fast!=slow but this also happens at start so do-while is used
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

}

//FLOYDS ALGO OR HARE AND TORTOISE ALGO
// if tortoise and hare reach same node means there is cycle in linked list
// hare moves 2 steps tortoise 1

//to remove cycle
//hare should be taken to head
//now hare and tortoise should move ahead a step each
//right before hare and tortoise reach same node which is also the starting point of the cycle
//then next of tortoise will be pointed to null to remove cycle

//proof of algo
//dist moved by hare= m+n+ l*J m is dist upto starting point of cycle,
//n is dist where from start of cycle to where hare and tortoise clash
//l*j is no of loops of cycle before clashing
//dist moved by tortoise=m+n+l*i

//dist moved by hare= 2* dist moved by tortoise
// m+n+l*j=2*(m+n+l*i)
// m+n=l*(j-2*i)
// m=l*(j-2*i)-n