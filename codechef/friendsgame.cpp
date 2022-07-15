#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>> t;
    while(t--){
        cin>>a>>b>>c>>d;
        int e,f;
        if(a>b || a==b){
            b= b+c;
        }
        else if(b>a){
            a= a+c;
        }
        if(a>b || a==b){
            b=b+d;
        }
        else if(b>a){
            a=a+d;
        }
        if(a>b || a==b){
            cout<< "N";
        }
        else{
            cout<< "S";
        }
        cout<< endl;
    }
}