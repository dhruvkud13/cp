#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int noOfOnes(int n){
    int count=0;
    while(n!=0){
        n= n & n-1;
        count++;
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<< noOfOnes(7)<<endl;
}