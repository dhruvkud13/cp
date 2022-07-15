#include <iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>> t;
    while(t--){
        cin>>x>>y;
        int sum= 10*x + 5*y;
        cout<< sum << endl;
    }
}