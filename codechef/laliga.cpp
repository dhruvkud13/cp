#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>> t;
    while(t--){
        for(int i=0;i<4;i++){
            string s;
            int n;
            cin>> s>>n;
            if(s== "RealMadrid"){
                a=n;
            }
            if(s== "Malaga"){
                b=n;
            }
            if(s== "Barcelona"){
                c=n;
            }
            if(s== "Eibar"){
                d=n;
            }
        }
        if(c>d && a<b){
            cout<< "Barcelona";
        }
        else{
            cout<< "RealMadrid";
        }
        cout<< endl;
    }
}