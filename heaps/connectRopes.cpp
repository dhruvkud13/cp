#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int connectRopes(vector<int>&nums){
    priority_queue<int,vector<int>,greater<int>>minHeap;
    int cost=0;
    for(int i=0;i<nums.size();i++){
        minHeap.push(nums[i]);
    }
    while(minHeap.size()>=2){
        int first=minHeap.top();
        minHeap.pop();
        int second=minHeap.top();
        minHeap.pop();
        cost=cost+first+second;
        minHeap.push(first+second);
    }
    return cost;
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
    cout<<connectRopes(nums)<<endl;
}

//connect ropes to minimise cost