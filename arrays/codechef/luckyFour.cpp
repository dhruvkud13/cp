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
        int count=0;
        int n;
        cin>>n;
        while(n!=0){
            int r=n%10;
            if(r==4){
                count++;
            }
            n=n/10;
        }
        cout<<count<<endl;
    }
}