#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,v1,v2;
        cin>>n>>v1>>v2;
        // t=d/s;
        float a=((n*sqrt(2))/v1);
        float b=(n*2.0/v2);
        if(a < b){
            cout << "Stairs" << endl;
        }
        else{
            cout << "Elevator" << endl;
        }
    }
}