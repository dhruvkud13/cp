#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// wap to find 2 unique numbers in an array where all nos except two, are present twice
int setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

void twounique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum= xorsum ^ arr[i];
    }
    int tempxor= xorsum;
    // now find rightmost set bit of xor sum
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit= xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos - 1)){
            newxor= newxor ^ arr[i];
        }
    }

    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    twounique(arr,n);
}