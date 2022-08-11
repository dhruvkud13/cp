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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* merge(node* &head1,node* &head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummyNode=new node(-1);
    node* ptr3=dummyNode;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummyNode->next;
}

//recursive way
node* mergeRecursive(node* &head1,node* &head2){
    //if any list is over add remaining nodes of other list
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    // add smaller data to the result and then for result->next call function again
    if(head1->data<head2->data){
        result=head1;
        result->next= mergeRecursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }

    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    node* head1=NULL;
    node* head2=NULL;
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        insertAtTail(head1,arr1[i]);
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* head3=mergeRecursive(head1,head2);
    display(head3);
}

//iterative way
//make a dummy node
//3 pointers
// pointer 3 points to linked list made after merging
//compare ptr1 and ptr2 and whichever is smaller add to final list
// move ptr1 or ptr2 depends and ptr3 forward and continue accordingly