#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
#define N 100

vector<int> search2DMatrix(int arr[][N],int n,int key){
    int row=0;
    int col=n-1;
    vector<int>ans;
    while(row>=0 && row<n && col>=0 && col<n){
        if(arr[row][col]==key){
            ans.push_back(row);
            ans.push_back(col);
            return ans;
        }
        else if(arr[row][col]<key){
            row++;
        }
        else{
            col--;
        }
    }
    if(ans.empty()){
        ans.push_back(-1);
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[N][N];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    vector<int>ans=search2DMatrix(arr,n,key);
    if(ans[0]==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<ans[0]<<" "<<ans[1];
    }
}

//O(m+n) complexity