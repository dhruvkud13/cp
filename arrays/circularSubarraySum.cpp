#include <bits/stdc++.h>
using namespace std;

int kadanesAlgo(int a[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum= max(maxsum,currsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum= kadanesAlgo(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]= -a[i];
    }
    wrapsum= totalsum + kadanesAlgo(a,n);

    cout<< "max sum is: " <<max(nonwrapsum,wrapsum) << endl;
}

// max subarray sum= total array sum- sum of non contributing elements
// reverse signs of array elements and then apply kadanes algo so that non contributing
// elements can be found
// if contrib elements are wrapping then non contrib will be non wrapping and their sum can be found