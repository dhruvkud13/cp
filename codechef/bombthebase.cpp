#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,x,index=0;
        cin>> n >> x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
            if(a[i]<x){
                index=i+1;
            }
        }
        cout<< index << endl;
    }
}