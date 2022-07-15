#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        cin>> s1;
        cin>> s2;
        int c1=0,c2=0;
        for(int i=0;i<s1.length();i++){
            if((s1[i]!=s2[i]) && (s1[i]!='?' && s2[i]!='?')){
                c1++;
            }
            else if((s1[i]=='?' && s2[i]!='?') || (s1[i]!='?' && s2[i]=='?') || (s1[i]=='?' && s2[i]=='?')){
                c2++;
            }
        }
        cout<< c1 <<" " << c1+c2 << endl;
    }
}