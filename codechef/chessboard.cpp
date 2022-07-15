#include <iostream>
using namespace std;
int main()
{
    int t,x1,y1,x2,y2;
    cin>> t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        int x=abs(x1-x2);
        int y=abs(y1-y2);
        cout<< max(x,y);
        cout<< endl;
    }
}