#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

bool sortedArray(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray= sortedArray(arr+1,n-1);
    return(arr[0]<arr[1] && restArray);
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
    cout<< sortedArray(arr,n)<<endl;
}