#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int coins=1,count=0;
        while(n>=coins){
            n -= coins;
            count ++;
            coins++;
        }
        cout<< count << endl;
    }
}