#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int minDifference1=0;
    int minDifference2=0;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(key==arr[mid]){
            return key;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    minDifference1=abs(arr[start]-key);
    minDifference2=abs(arr[end]-key);
    if(minDifference1<minDifference2){
        return arr[start];
    }
    else{
        return arr[end];
    }
}

int floorCeilSearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int floor=0;
    int ceil=0;
    int minDifference1=0;
    int minDifference2=0;
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
            ceil=mid;
            end=mid-1;
        }
    }
    minDifference1=abs(arr[floor]-key);
    minDifference2=abs(arr[ceil]-key);
    if(minDifference1<minDifference2){
        return arr[floor];
    }
    else{
        return arr[ceil];
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
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans=binarySearch(arr,n,key);
    cout<<ans;
    int ans1=floorCeilSearch(arr,n,key);
    cout<<ans1;
}