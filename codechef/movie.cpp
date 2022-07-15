#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(y%2==0){
        int sum= y/2 + (x-y);
        cout<< sum;
    }
    else{
        cout<< "wrong input";
    }
    cout<<endl;
}