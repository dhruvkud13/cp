#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int allSubsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i& (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[3] = {1,2,3};
    allSubsets(arr,3);
}