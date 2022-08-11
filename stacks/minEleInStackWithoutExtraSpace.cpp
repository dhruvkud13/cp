#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int minElement= INT_MAX;
stack <int> s;

int getMinEle(){
    if(s.size()==0){
        return -1;
    }
    return minElement;
}

void push(int a){
    if(s.size()==0){
        s.push(a);
        minElement=a;
    }
    else{
        //two pushing cases
        if(a>=minElement){
            s.push(a);
        }
        else{ //flag condition
            int flag= 2*a - minElement; 
            s.push(flag);
            minElement=a;
        }
    }
}

int pop(){
    if(s.size()==0){
        return -1;
    }
    else{
        if(s.top()>=minElement){
            s.pop();
            return s.top();
        }
        else if(s.top()<minElement){ //flag condition
            int popped= minElement;
            int ans= 2*popped - s.top();
            minElement= ans;
            s.pop();
            return popped;
        }
    }
}

int top(){
    if(s.size()==0){
        return -1;
    }
    else{
        if(s.top()>=minElement){
            return s.top();
        }
        else if(s.top()<minElement){ //means flag condition
            return minElement;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        push(arr[i]);
    }
    cout<<getMinEle()<<endl;
    cout<<top()<<endl;
    cout<<pop()<<endl;
    cout<<top()<<endl;
    cout<<getMinEle()<<endl;
}

//stack implementation in O(1) space
//only variables are O(1)
//implementation with variables