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
        else if(mid-1>=start && arr[mid-1]==key){ //mid>=start to check if array is not going out of bounds
            return mid-1;
        }
        else if(mid+1<=end && arr[mid+1]==key){
            return mid+1;
        }
        else if(key<arr[mid]){
            end=mid-2;
        }
        else{
            start=mid+2;
        }
    }
    return -1;
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
    int key;
    cin>>key;
    int ans=binarySearch(arr,n,key);
    if(ans==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<ans;
    }
}