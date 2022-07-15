#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,l,r;
        cin >> d >> l >> r;
        if(d<l){
            cout<< "Too Early";
        }
        else if(d>r){
            cout<< "Too Late";
        }
        else{
            cout<< "Take second dose now";
        }
        cout << endl;
    }
}