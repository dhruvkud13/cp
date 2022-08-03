#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int countPaths(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i=1;i<=6;i++){
       count += countPaths(s+i,e);
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

    int s,e;
    cin>>s>>e;
    cout<<countPaths(s,e)<<endl;
}