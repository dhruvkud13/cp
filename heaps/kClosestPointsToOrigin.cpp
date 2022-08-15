#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int kClosestToOrigin(vector<vector<int>>&nums,int k){
    priority_queue<pair<int,pair<int,int>>> maxHeap;
    for(int i=0;i<nums.size();i++){
        maxHeap.push({nums[i][0]*nums[i][0] + nums[i][1]*nums[i][1], {nums[i][0], nums[i][1]}});
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    while(maxHeap.size()>0){
            cout<<maxHeap.top().second.first<<" "<<maxHeap.top().second.second<<endl;
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

    vector <vector<int>> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<2;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        nums.push_back(temp);
        temp.clear();
    }
    // for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<2;j++){
    //         cout<<nums[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int k;
    cin>>k;
    kClosestToOrigin(nums,k);
}

//closest means min heap not necessary
//in this case max heap as closest points remain after popping