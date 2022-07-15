#include <bits/stdc++.h>
using namespace std;

bool pairSum(int a[], int n, int sum){
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]+a[j]==sum){
    //             cout<<a[i]<<" "<<a[j]<<endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;
    int start=0,end=n-1;
    while(start<end){
        if(a[start]+a[end]==sum){
            cout << a[start] << " " << a[end] << endl;
            return true;
        }
        else if(a[start]+a[end]>sum){
            end--;
        }
        else{
            start++;
        }
    }
    return false;
    // complexity O(n) but array should be sorted for this technique
}

int main(){
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int sum;
    cout<< "enter pairsum: " <<endl;
    cin>> sum;
    cout<< pairSum(a,n,sum);
}