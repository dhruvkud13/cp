#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>> t;
    while(t--){
        int carl=0,chef=0;
        cin>> x;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='C'){
                carl= carl+2;
            }
            else if(s[i]=='N'){
                chef= chef+2;
            }
            else if(s[i]=='D'){
                chef=chef+1;
                carl=carl+1;
            }
        }
        int carlprice=0;
        if(carl==chef){
            carlprice= 55*x;
        }
        else if(carl>chef){
            carlprice=60*x;
        }
        else if(carl<chef){
            carlprice=40*x;
        }

        cout<< carlprice << endl;
    }
}