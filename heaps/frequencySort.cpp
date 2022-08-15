#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int frequencySort(vector<int>&nums){
    unordered_map<int,int>count;
    priority_queue<pair<int,int>>maxHeap;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    for(auto i=count.begin();i!=count.end();i++){
        maxHeap.push({i->second,i->first}); //second is pushed first as we have to sort acc to count
    }
    while(maxHeap.size()>0){
        int frequency= maxHeap.top().first;
        int element= maxHeap.top().second;
        for(int i=0;i<frequency;i++){
            cout<<element<<" ";
        }
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
    frequencySort(nums);
}