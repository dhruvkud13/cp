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

int sumBetween(vector<int>&nums,int k1,int k2){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>k1 && nums[i]<k2){
            sum+=nums[i];
        }
    }
    return sum;
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
    int k1,k2;
    cin>>k1>>k2;
    int k1th=kthSmallest(nums,k1);
    int k2th=kthSmallest(nums,k2);
    cout<<sumBetween(nums,k1th,k2th)<<endl;
}

//sum of elements between k1th and k2th smallest numbers