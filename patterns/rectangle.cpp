#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cout<< "enter rows of rec" <<endl;
    cin>> x;
    cout<< "enter columns of rec" << endl;
    cin>> y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i==0 || i==x-1){
                cout<< "*";
            }
            else if(j==0 || j==y-1){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<< '\n';
    }
}