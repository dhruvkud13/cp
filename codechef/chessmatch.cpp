#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>> n >> a >> b;
        int x,y;
        x= 2*(180+n);
        y= a+b;
        cout<< x-y << endl;
    }
}