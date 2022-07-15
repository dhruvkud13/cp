#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int b;
        cin>> b;
        int count=0;
        if(b<=3){
            cout << "0" << endl;
        }
        else{
            b=b-3;
            if(b%2==1){
                b++;
            }
            b=b/2;
            cout<< (b*(b+1))/2 << endl;
        }
    }
}