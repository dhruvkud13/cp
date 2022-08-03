#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string restOfString= s.substr(1);
    reverse(restOfString);
    cout<<s[0]<<" ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin>>s;
    reverse(s);
}