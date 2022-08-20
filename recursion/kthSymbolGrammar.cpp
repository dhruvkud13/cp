#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int solve(int n,int k){
    if(n==1 && k==1){
        return 0;
    }
    int mid=pow(2,n-1)/2; //as length of a row is 2^n-1
    if(k<=mid){
        return solve(n-1,k);
    }
    else{
        return !solve(n-1,k-mid); //have to take complement so not sign
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
    int k;
    cin>>k;
    int ans=solve(n,k);
    if(ans==0){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
}