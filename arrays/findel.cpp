#include <bits/stdc++.h>
using namespace std;

int linearSearch(int n,int key,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int n,int key,int arr[]){
    int low=0;
    int high= n;
    while(low<=high){
        int mid= (low+high) /2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << '\n';
    int key;
    cin>> key;
    int index=linearSearch(n,key,arr);
    if(index==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index :"<<index<<endl;
    }
    int index2=binarySearch(n,key,arr);
    if(index2==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index :"<<index2<<endl;
    }
}