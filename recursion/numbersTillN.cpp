#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void decreasing(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    decreasing(n-1);
}

void increasing(int n){
    if(n==0){
        return;
    }
    increasing(n-1);
    cout << n << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    decreasing(n);
    increasing(n);
}