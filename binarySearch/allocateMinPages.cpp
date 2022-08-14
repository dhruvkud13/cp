#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

bool isValid(int arr[],int n,int k,int mid){ //mid is basically max pages possible
    int student=1;
    int sumPages=0;
    for(int i=0;i<n;i++){
        sumPages+=arr[i];
        if(sumPages>mid){ //when sum is greater than max pages, make new student
            student++;
            sumPages=arr[i]; //this value is given to no og pages of new student now
        }
        if(student>k){
            return false;
        }
    }
    return true;
}

int findMinMaxLimit(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int result=-1;
    int sumPages=0; //sum of all array elements for upper limit
    int maxPages=0; //helps to find lower limit of array
    for(int i=0;i<n;i++){
        maxPages=max(maxPages,arr[i]);
        sumPages+=arr[i];
    }
    start=maxPages;
    end=sumPages;
    if(n<k){
        return -1;
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,k,mid)==true){
            result=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return result;
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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int result=findMinMaxLimit(arr,n,k);
    if(result==-1){
        cout<<"cant allocate pages properly";
    }
    else{
        cout<<result;
    }
}