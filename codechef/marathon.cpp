#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>> a>>b>>c>>d>>e;
        if(a*b >= 10 && a*b < 21){
            cout << c << endl;
        }
        else if(a*b >= 21 && a*b < 42){
            cout<<d<<endl;
        }
        else if(a*b >= 42){
            cout<<e<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}