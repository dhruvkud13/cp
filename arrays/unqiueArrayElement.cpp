#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum= xorsum ^ arr[i];
    }
    return xorsum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<< unique(arr,n)<<endl;
}