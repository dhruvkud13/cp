#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int kthSmallest(vector<int>&nums,int k){
    priority_queue<int>maxHeap;
    for(int i=0;i<nums.size();i++){
        maxHeap.push(nums[i]);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
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
    cout<<kthSmallest(nums,k)<<endl;
}