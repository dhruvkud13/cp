#include <iostream>
using namespace std;
int main()
{
    int t,a1,a2,b1,b2,c1,c2;
    cin>> t;
    while(t--){
        cin>>a1>> a2;
        cin>>b1>> b2;
        cin>>c1>> c2;
        int a=a1+a2;
        int b=b1+b2;
        int c=c1+c2;
        int d=max(a,b);
        cout<< max(d,c);
        cout<< endl;
    }
}