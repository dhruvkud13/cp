#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int kLargest(vector<int>&nums,int k){
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<nums.size();i++){
        minHeap.push(nums[i]);
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    while(minHeap.size()>0){
        cout<<minHeap.top()<<endl;
        minHeap.pop();
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
    kLargest(nums,k);
}