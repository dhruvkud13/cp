#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int maxsum= INT_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum += a[j];
            cout<< sum << endl;
        }
        maxsum= max(maxsum,sum);
    }
    cout<< "max sum is: " <<maxsum << endl;
}