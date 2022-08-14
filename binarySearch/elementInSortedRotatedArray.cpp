#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int binarySearch(int arr[],int n,int start,int end,int key){
    // int start=0;
    // int end=n-1;
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

int findMinEle(int arr[],int n){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        if(arr[start]<=arr[end]){
            return start;
        }
        int mid= start+((end-start)/2);
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
            return mid;
        }
        else if(arr[start]<=arr[mid]){
            start=mid+1;
        }
        else if(arr[mid]<=arr[end]){
            end=mid-1;
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
    int minEle=findMinEle(arr,n);
    cout<<minEle<<endl;
    if(binarySearch(arr,n,0,minEle-1,key) != -1){
        cout<< "found at position: "<<binarySearch(arr,n,0,minEle-1,key) <<endl;
    }
    else if(binarySearch(arr,n,minEle,n-1,key) != -1){
        cout<< "found at position: "<<binarySearch(arr,n,minEle,n-1,key) <<endl;
    }
    else{
        cout<< "not found" <<endl;
    }
}