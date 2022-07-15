#include <iostream>
using namespace std;
int main()
{
    int t,x;
    cin>> t;
    while(t--){
        cin>>x;
        int packages= x/2+ 1;
        cout << packages << endl;
    }
}