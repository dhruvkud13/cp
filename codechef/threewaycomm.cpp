#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        int d1= (((x1-x2)*(x1-x2)) + (y1-y2)*(y1-y2));
        int d2= (((x1-x3)*(x1-x3)) + (y1-y3)*(y1-y3));
        int d3= (((x2-x3)*(x2-x3)) + (y2-y3)*(y2-y3));
        int a= r*r;
        if((d1<=a && d2<=a) || (d1<=a && d3<=a) || (d2<=a && d3<=a)){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}