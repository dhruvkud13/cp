#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s;
        cin>> s;
        int flag=1;
        int yes=0,no=0,indian=0;
        for(int i=0;i<a;i++){
            if(s[i]=='Y'){
                cout<< "NOT INDIAN"<< endl;
                flag=0;
                break;
            }
            if(s[i]=='I'){
                cout << "INDIAN" << endl;
                flag=0;
                break;
            }
        }
        if(flag){
            cout << "NOT SURE" << endl;
        }
    }
}