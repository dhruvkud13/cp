#include <iostream>
using namespace std;
int main()
{
    int t,n,k,h;
    cin>> t;
    while(t--){
        cin>>n>>k;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>h;
            if(h>k){
                count++;
            }
        }
        cout<< count <<endl;
    }
}