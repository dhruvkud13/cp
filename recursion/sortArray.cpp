#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void insert(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int value=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(value);
}

void sortArray(vector<int> &v){
    if(v.size()==1){
        return;
    }
    int lastEl=v[v.size()-1];
    v.pop_back();
    sortArray(v);
    insert(v,lastEl);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sortArray(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}