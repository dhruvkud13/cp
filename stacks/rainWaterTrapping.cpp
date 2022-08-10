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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxleft[n];
    int maxright[n];
    maxleft[0]=arr[0];
    maxright[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        maxleft[i]= max(maxleft[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        maxright[i]= max(maxright[i+1],arr[i]);
    }
    int water[n];
    for(int i=0;i<n;i++){
        water[i]= min(maxleft[i],maxright[i]) -arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=water[i];
    }
    cout<<sum;
}