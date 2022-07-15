#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int increase= b-a;
        int min= c*e;
        int max= d*e;
        if((increase <= max) && (increase >= min)){
            cout<< "1" << endl;
        }
        else{
            cout<< "0" << endl;
        }
    }
}