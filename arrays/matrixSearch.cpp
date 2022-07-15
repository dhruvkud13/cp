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

    int key;
    cin>>key;

    int r=0,c=m-1;
    bool flag= 0;
    while(r<n && c>=0){
        if(a[r][c]==key){
            flag=1;
            break;
        }
        if(a[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag==1){
        cout<<"element found at position: "<< r<< c<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
}

// matrix is sorted by rows and columns so we can use property that if element smaller we decrement columns and if element greater we increment rows
// we start from top right here