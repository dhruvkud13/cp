#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector <int> left;
    stack <pair<int,int>> s;
    int n;
    cin>>n;
    int arr[n];
    int pseudoindex1=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(s.size()==0){
            left.push_back(pseudoindex1);
        }
        else if(s.size()>0 && s.top().first<arr[i]){
            left.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                left.push_back(pseudoindex1);
            }
            else{
                left.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }

    s.empty();

    vector <int> right;
    // stack <int> s;
    int pseudoindex2=7;
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            right.push_back(pseudoindex2);
        }
        else if(s.size()>0 && s.top().first<arr[i]){
            right.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                right.push_back(pseudoindex2);
            }
            else{
                right.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    reverse(right.begin(),right.end());

    int width[n];
    for(int i=0;i<n;i++){
        width[i]= right[i]-left[i]-1; 
    }
    int area[n];
    for(int i=0;i<n;i++){
        area[i]= arr[i]*width[i];
    }
    int maxarea=0;
    for(int i=0;i<n;i++){
        maxarea= max(maxarea,area[i]);
    }
    cout<<maxarea<<endl;
}