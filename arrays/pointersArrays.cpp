#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void swapp(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

void swap1(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[]={1,2,3,4};
    cout<< *arr <<endl;
    int *ptr=arr;
    for(int i=0;i<4;i++){
        // cout<< *ptr <<endl;
        // ptr++;
        cout<<*(arr+i)<<endl;
    }

    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl; // prints value of p, dereferencing once
    cout<<**q<<endl; // prints value of a, derefencing twice
    **q=12;
    cout<<a<<endl;

    //passing pointers to function
    int a1=2;
    int b1=3;
    //pass by value

    swapp(a1,b1);
    cout<<a1<<" "<<b1<<endl;
    //pass by reference
    int *a1ptr=&a1;
    int *b1ptr=&b1;
    cout << *a1ptr << " " << *b1ptr << endl;
    swap1(a1ptr,b1ptr);
    cout<<a1<<" "<<b1<<endl;
    swap1(&a1,&b1);
    cout<<a1<<" "<<b1<<endl;
}