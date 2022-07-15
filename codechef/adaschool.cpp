#include <iostream>
using namespace std;

int main()
{
    int t,x;
    cin>> t;
    while(t--){
        int n, m;
	    cin>>n>>m;
	    if((n*m)%2==0){
	        cout<<"yes"<<endl;
        }
	    else{
	        cout<<"no"<<endl;
        }
    }
}