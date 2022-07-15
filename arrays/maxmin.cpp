#include <bits/stdc++.h>
using namespace std;

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

    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<'\n'<<"max is :"<<max<<endl;
    cout<<'\n'<<"min is :"<<min<<endl;
}