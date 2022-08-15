#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int kFrequent(vector<int>&nums,int k){
    unordered_map<int,int>count;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    for(auto i=count.begin();i!=count.end();i++){
        minHeap.push({i->second,i->first}); //second is pushed first as we have to sort acc to count
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    while(minHeap.size()>0){
        cout<<minHeap.top().second<<" "; //second is first of map which is basically the numbers
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
    kFrequent(nums,k);
}

//min heap used here