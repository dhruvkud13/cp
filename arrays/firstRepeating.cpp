#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N= 100;
    int index[N];
    for(int i=0;i<N;i++){
        index[i]=-1;
    }
    int minindex= INT_MAX;
    for(int i=0;i<n;i++){
        if(index[a[i]] != -1){
            minindex= min(minindex,index[a[i]]);
        }
        else{
            index[a[i]]=i;
        }
    }
    if(minindex== INT_MAX)
    {
        cout << "-1" << endl;
    }
    else{
        cout << minindex + 1 << endl;
    }
}