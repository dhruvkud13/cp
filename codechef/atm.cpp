#include <iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>> t;
    while(t--){
        cin>> n>>k;
        int a;
        for(int i=0;i<n;i++){

            cin>> a;
            if(a<=k){
                cout << "1";
                k=k-a;
            }
            else{
                cout << "0";
            }
        }
        cout<<endl;
    }
}