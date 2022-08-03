#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int friendsPairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);  //coz n-1 pairing techniques
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<< friendsPairing(4)<<endl;
} 