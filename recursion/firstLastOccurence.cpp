#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int firstOccurence(int arr[],int n,int i,int x){
    if(i==n){
        return -1;
    }
    if(arr[i]==x){
        return i;
    }
    return firstOccurence(arr,n,i+1,x);
}

int lastOccurence(int arr[],int n,int i,int x){
    if(i==n){
        return -1;
    }
    int restArray= lastOccurence(arr,n,i+1,x);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==x){
        return i;
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
        cin>> arr[i];
    }
    int x;
    cin>>x;
    cout<< firstOccurence(arr,n,0,x)<<endl;
    cout<< lastOccurence(arr,n,0,x)<<endl;
}