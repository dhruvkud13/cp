#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int r1,w1,c1,r2,w2,c2;
        cin>> r1>> w1>>c1;
        cin>>r2>>w2>>c2;
        if(r1>r2){
	        if(w1>w2 || c1>c2){
	            cout<<"A"<<endl;
	        }
	        else{
	            cout<<"B"<<endl;
	        }
	    }
	    else{
	        if(w1>w2 && c1>c2){
	            cout<<"A"<<endl;
	        }
	        else{
	            cout<<"B"<<endl;
	        }
	    }
    }
}