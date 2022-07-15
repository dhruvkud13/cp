#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    char a[n+1];
    cin>>a;

    bool check=1;
    for(int i=0;i<n;i++){
        if(a[i] != a[n-1-i]){
            check=0;
            break;
        }
    }

    if(check==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}