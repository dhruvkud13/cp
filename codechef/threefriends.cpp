#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x== y+z){
            cout << "yes" << endl;
        }
        else if(y==x+z){
            cout << "yes" << endl;
        }
        else if(z==x+y){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}