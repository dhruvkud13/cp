#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// void permute(string a, int l, int r) 
// { 
//     if (l == r) 
//         cout<<a<<endl; 
//     else
//     { 
//         for (int i = l; i <= r; i++) 
//         { 
//             swap(a[l], a[i]);  
//             permute(a, l+1, r); 
//             swap(a[l], a[i]); 
//         } 
//     } 
// } 

// void arrayPermute(vector<int> &a,int index){
//     if(index==a.size()){
//         for(int i=0;i<a.size();i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
//     }
//     else{
//         for(int i=index;i<a.size();i++){
//             swap(a[index],a[i]);
//             arrayPermute(a,index+1);
//             swap(a[index],a[i]);
//         }
//     }
// }

void avoidDuplicates(vector<int> &a,int index){
    if(index==a.size()){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=index;i<a.size();i++){
            if(a[index]!=a[i] && i!=index){
                swap(a[index],a[i]);
                avoidDuplicates(a,index+1);
                swap(a[index],a[i]);
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // string s;
    // cin>>s;
    // permute(s,0,s.length()-1); 
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i :a){
        cin>>i;
    }
    // arrayPermute(a,0);
    avoidDuplicates(a,0);
    return 0;

    // stl trick, still stays O(N!)
    // sort(a.begin(), a.end());
    // do
    // {
    //     ans.push_back(a);
    // } while (next_permutation(a.begin(), a.end()));

}

//permutations for array left