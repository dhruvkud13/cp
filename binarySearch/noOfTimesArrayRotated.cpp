#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int rotationsSearch(int arr[],int n){
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
    int rotations=rotationsSearch(arr,n);
    cout<<"no of rotations are "<<rotations;
}