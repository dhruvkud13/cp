#include <bits/stdc++.h>
using namespace std;

int main(){
    int maxx= INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        maxx= max(maxx,arr[i]);
        cout<< maxx << endl;
    }
}