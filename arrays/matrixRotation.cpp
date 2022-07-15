#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void swapp(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

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
    
    // for(int i=n-1;i>=0;i--){
    //     for(int j=0;j<n;j++){
    //         cout<< a[i][j] << " ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp= a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp= a[i][j];
            a[i][j]= a[i][n-j-1];
            a[i][n-j-1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}