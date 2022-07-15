#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--)
    {
        int a,b;
        cin >> a >> b;
        if(a%2==0 ){
            if(((a-1)==b) || ((a-2)==b) || ((a+2)==b)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            if(((a+1)==b) || ((a-2)==b) || ((a+2)==b)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}