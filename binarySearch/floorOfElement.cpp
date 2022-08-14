#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int floor=0;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(key==arr[mid]){
            return arr[mid];
        }
        else if(key>arr[mid]){
            floor=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return arr[floor];
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
    cout<<"floor of "<<key<<" is "<<ans;
}