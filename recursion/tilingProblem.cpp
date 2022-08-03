#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1) + tilingWays(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<< tilingWays(4)<<endl;
}

// given a 2xn board and tiles of size 2x1, count the no of ways to tile the given board using these tiles