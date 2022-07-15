#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int w[n],h[n],p[n];
        int c[n];
        for(int i=0;i<n;i++){
            cin>>w[i]>>h[i]>>p[i];
        }
        int largest=0;
        for(int i=0;i<n;i++){
            if(p[i]<=b){
                if(w[i]*h[i] > largest){
                    largest= w[i]*h[i];
                }
            }
        }
        // int i=0;
        if(largest==0){
            cout << "no tablet" << endl;
        }
        else{
            cout << largest << endl;
        }
    }
}