#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count;
        if(52%n == 0){
            cout << "0" << endl;
        }
        else if(52%n != 0){
            count = 52%n;
            cout << count << endl;
        }
    }  
}