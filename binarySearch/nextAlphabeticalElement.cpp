#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int binarySearch(char arr[],int n,int key){
    int start=0;
    int end=n-1;
    char ceil='#';
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(key==arr[mid]){
            start=mid+1; //ceil of alphabet even if its equal to key will be the next alphabet in the array
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            ceil=mid;
            end=mid-1;
        }
    }
    return arr[ceil];
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
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char key;
    cin>>key;
    char ans=binarySearch(arr,n,key);
    cout<<"next alphabetical element of "<<key<<" is "<<ans;
}

//similar to ceil problem