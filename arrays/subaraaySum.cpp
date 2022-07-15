#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter sum of subarray: ";
    int sumneeded;
    cin>>sumneeded;
    int i=0,j=0,start=-1,end=-1,sum=0;
    while(j<n && sum+ a[j]<=sumneeded){
        sum+=a[j];
        j++;
    }
    if(sum==sumneeded){
        cout << i+1 << " " << j << endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum > sumneeded){
            sum -= a[i];
            i++;
        }
        if(sum==sumneeded){
            cout << i+1 << " " << j+1 << endl;
            return 0;
        }
        j++;
    }
    cout<< start << " " << end << endl;
}