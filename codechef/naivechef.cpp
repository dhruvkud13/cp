#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        float a,b;
        cin >> n >> a >> b;
        float arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];  
        }
        float c=0,d=0;
        for(int i=0;i<n;i++){
            if(arr[i]==a){
                c++;
            }if(arr[i]==b){
                d++;
            }
            
        }
        float r=(c/n)*(d/n);
        cout<<r<<endl;
    }
}