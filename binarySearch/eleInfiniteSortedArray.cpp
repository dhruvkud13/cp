#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int infiniteSearch(int arr[],int n,int key){
    int start=0;
    int end=1;
    while(key>arr[end]){
        start=end;
        end=2*end;
    }
    return binarySearch(arr,n,key);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    const int n=10;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans=infiniteSearch(arr,n,key);
    cout<<"found at "<<ans;
}