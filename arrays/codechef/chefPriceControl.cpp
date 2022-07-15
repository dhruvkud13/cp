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

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int loss=0;
        for(int i=0;i<n;i++){
            if(p[i]>k){
                loss += p[i]-k;
            }
        }
        cout<<loss<<endl;
    }
}