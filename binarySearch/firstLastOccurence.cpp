#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(key==arr[mid]){
            result=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return result;
}

int lastOccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(key==arr[mid]){
            result=mid;
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return result;
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
    int ans=firstOccurence(arr,n,key);
    if(ans==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<ans;
    }
    int ans1=lastOccurence(arr,n,key);
    if(ans1==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<ans1;
    }
}

//we have to always check if mid is first occurence or not