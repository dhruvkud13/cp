#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            cin>> a[i];
            sum1= sum1 + a[i];
        }
        for(int i=0;i<n;i++){
            cin>> b[i];
            sum2= sum2 + b[i];
        }
        int c=a[0],d=b[0];
        for(int i=1;i<n;i++){
            if(a[i]>c){
                c= a[i];
            }
        }
        for(int i=1;i<n;i++){
            if(b[i]>d){
                d= b[i];
            }
        }
        sum1= sum1 -c;
        sum2= sum2 -d;

        if(sum1< sum2){
            cout << "Alice" << endl;
        }
        else if(sum1> sum2){
            cout << "Bob" << endl;
        }
        else{
            cout << "Draw" << endl;
        }
    }
}
