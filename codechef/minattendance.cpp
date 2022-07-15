#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int holiday=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                holiday++;
            }
        }
        if(holiday>30){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}