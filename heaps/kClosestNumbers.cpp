#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int kClosest(vector<int>&nums,int k,int x){
    priority_queue<pair<int,int>>maxHeap;
    for(int i=0;i<nums.size();i++){
        maxHeap.push({abs(nums[i]-x),nums[i]});
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    while(maxHeap.size()>0){
            cout<<maxHeap.top().second<<" ";
            maxHeap.pop();
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector <int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int k;
    cin>>k;
    int x;
    cin>>x;
    kClosest(nums,k,x);
}