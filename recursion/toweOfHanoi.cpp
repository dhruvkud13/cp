#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void towerOfHanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    towerOfHanoi(3,'A','C','B');
}