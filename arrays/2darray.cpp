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

    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cin>>x;
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x== a[i][j]){
                cout<<i<<" "<<j<<endl;
                flag=1;
            }
        }
    }
    if(flag==1){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}