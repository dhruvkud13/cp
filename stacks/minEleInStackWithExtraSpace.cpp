#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

stack <int> s;
stack <int> ss;

void push(int a){
    s.push(a);
    if(ss.size()==0 || a<=ss.top()){ //as if we have two same nmbers so greater than equal to
        ss.push(a);
    }
    return;
}

int pop(){
    if(s.size()==0){
        return -1;
    }
    int ans= s.top();
    s.pop();
    if(ss.top()==ans){
        ss.pop();
    }  //only need to pop from ss when its at top and its equal to top of s
    return ans;
}

int getMinEle(){
    if(ss.size()==0){
        return -1;
    }
    return ss.top();
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
    cout<<pop()<<endl;
    cout<<getMinEle()<<endl;
    cout<< pop() << endl;
    cout<< getMinEle();

}