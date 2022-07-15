#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<< "*";
        }
        cout<< '\n';
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout << " ";
            }
            else{
                cout<< "*";
            }
        }
        cout<< '\n';
    }
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout<< '\n';
    }
}