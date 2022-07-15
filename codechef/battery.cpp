#include <iostream>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--){
        cin>> x;
        if(x<=15){
            cout<< "Yes";
        }
        else{
            cout<< "No";
        }
        cout << endl;
    }
}
