#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void permutations(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string restOfString= s.substr(0,i)+s.substr(i+1);
        permutations(restOfString,ans+ch);
    }
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
    permutations(s,"");
}