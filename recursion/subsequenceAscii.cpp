#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void subsequence(string s,string ans){
    if(s.length()==0){
        cout << ans << endl;
        return;
    }

    char ch=s[0];
    int asciiCode = ch;
    string restOfString= s.substr(1);

    subsequence(restOfString,ans);
    subsequence(restOfString,ans+ch);
    subsequence(restOfString,ans+ to_string(asciiCode));
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
    subsequence(s,"");
}   