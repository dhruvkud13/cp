#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int countMazePaths(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countMazePaths(n,i+1,j) + countMazePaths(n,i,j+1); 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout<< countMazePaths(3,0,0)<<endl;
}

// no of paths possible in a maze, movement only rightward or downward