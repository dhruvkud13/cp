#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

bool myCompare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    for(auto element:v){
        cout << element << " ";
    }     //auto decides which data type acc to initialization

    v.pop_back();

    vector<int> v2(3,10);

    swap(v,v2);
    for(auto element:v){
        cout << element << " ";
    }
    for(auto element:v2){
        cout << element << " ";
    }

    sort(v.begin(),v.end());

    cout<<endl;

    pair<int,int> p;
    p.first=1;
    p.second=2;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<endl;

    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v1;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        // pair<int,int>p;
        // p.first=arr[i];
        // p.second=i;
        // v1.push_back(p);
        v1.push_back(make_pair(arr[i],i));
    }

    sort(v1.begin(),v1.end(),myCompare);
    for(int i=0;i<v1.size();i++){
        arr[v1[i].second]=i;
    }
    for(int i=0;i<v1.size();i++){
        cout<<arr[i]<<" ";
    }
}