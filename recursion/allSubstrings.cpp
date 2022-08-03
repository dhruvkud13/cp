#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void subStrings(string s,string answer){
    if(s.length()==0){
        cout<<answer<<endl;
        return;
    }
    char ch=s[0];
    string restOfString= s.substr(1);
    subStrings(restOfString,answer);
    subStrings(restOfString,answer+ch);
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
    subStrings(s,"");
}