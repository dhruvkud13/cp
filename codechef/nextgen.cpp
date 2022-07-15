#include <iostream>
using namespace std;
int main()
{
    int t,a,b,x,y;
    cin>> t;
    while(t--){
        cin>> a>>b>>x>>y;
        if( a*b <= x*y){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
}