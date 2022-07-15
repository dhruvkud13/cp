#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%2==0){
        int y = (x*x)/2;
        cout<<y;
    }
    else{
        cout<< "enter even no";
    }
}