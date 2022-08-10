#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int maxAreaHisto(vector <int> v){
    vector <int> left;
    stack <pair<int,int>> s;
    int pseudoindex1=-1;
    int size= v.size();
    for(int i=0;i<size;i++){
        if(s.size()==0){
            left.push_back(pseudoindex1);
        }
        else if(s.size()>0 && s.top().first<v[i]){
            left.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=v[i]){
            while(s.size()>0 && s.top().first>=v[i]){
                s.pop();
            }
            if(s.size()==0){
                left.push_back(pseudoindex1);
            }
            else{
                left.push_back(s.top().second);
            }
        }
        s.push({v[i],i});
    }

    s.empty();

    vector <int> right;
    // stack <int> s;
    for(int i=size-1;i>=0;i--){
        if(s.size()==0){
            right.push_back(size);
        }
        else if(s.size()>0 && s.top().first<v[i]){
            right.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=v[i]){
            while(s.size()>0 && s.top().first>=v[i]){
                s.pop();
            }
            if(s.size()==0){
                right.push_back(size);
            }
            else{
                right.push_back(s.top().second);
            }
        }
        s.push({v[i],i});
    }
    reverse(right.begin(),right.end());

    int width[size];
    for(int i=0;i<size;i++){
        width[i]= right[i]-left[i]-1; 
    }
    int area[size];
    for(int i=0;i<size;i++){
        area[i]= v[i]*width[i];
    }
    int maxarea=0;
    for(int i=0;i<size;i++){
        maxarea= max(maxarea,area[i]);
    }
    return maxarea;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector <int> v;
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxarea=0;
        for(int j=0;j<n;j++){
            v.push_back(arr[0][j]);
        }
        maxarea=maxAreaHisto(v);
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                v[j]=0;
            }
            else{
                v[j]=v[j]+arr[i][j];
            }
        }
        maxarea= max(maxarea,maxAreaHisto(v));
        // cout<<maxarea<<endl;
    }
    cout<<maxarea<<endl;
}

// max area of rectangle in a binary matrix