#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int price=0,small;
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            price =price + a[i];
            if(i==0)
            {
                small=a[0];
            }
            if(small>a[i])
            {
                small=a[i];
            }
        }
        
        price = price - small;
        cout<< price << endl;
    }
}