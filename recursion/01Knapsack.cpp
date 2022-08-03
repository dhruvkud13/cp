#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int knapsack(int value[],int weight[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(weight[n-1]>W){
        return knapsack(value,weight,n-1,W);
    }
    else{
        return max(value[n-1]+knapsack(value,weight,n-1,W-weight[n-1]),knapsack(value,weight,n-1,W));
    }
    max(knapsack(value,weight,n-1,W-weight[n-1])+ value[n-1], //including
    knapsack(value,weight,n-1,W)); //not including
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,W;
    cin>>n>>W;
    int value[n],weight[n];
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    cout<<knapsack(value,weight,n,W)<<endl;
}