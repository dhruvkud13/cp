#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

bool isPossible(int** arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
        int rows=x;
        int col=y;
        while(rows>=0 && col>=0){
            if(arr[rows][col]==1){
                return false;
            }
            rows--;
            col--;
        }

        rows=x;
        col=y;
        while(rows>=0 && col<n){
            if(arr[rows][col]==1){
                return false;
            }
            rows--;
            col++;
        }
        return true;
}

bool nqueens(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isPossible(arr,x,col,n)){
            arr[x][col]=1;
            if(nqueens(arr,x+1,n)){
                return true;
            }
            else{
                arr[x][col]=0;  //backtraking
            }
        }
    }
    return false;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin>>n;

    int** arr= new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

    if(nqueens(arr,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No solution"<<endl;
    }
}