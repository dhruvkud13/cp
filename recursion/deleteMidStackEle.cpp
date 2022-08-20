#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void deleteMid(stack<int>&s,int middle){
    if(middle==1){
        s.pop();
        return;
    }
    int lastEl=s.top();
    s.pop();
    deleteMid(s,middle-1);
    s.push(lastEl);
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
    int middle=s.size()/2 +1;
    deleteMid(s,middle);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}