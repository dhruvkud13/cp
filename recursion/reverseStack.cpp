#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void insert(stack<int>&s,int temp){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int value=s.top();
    s.pop();
    insert(s,temp);
    s.push(value);
}

void reverseStack(stack<int>&s){
    if(s.size()==1){
        return;
    }
    int lastEl=s.top();
    s.pop();
    reverseStack(s);
    insert(s,lastEl);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}