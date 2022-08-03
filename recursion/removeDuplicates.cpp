#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

string removeDuplicates(string s){
    if(s.length()==0){
        return "";
    }
    char ch= s[0];
    string restOfString= s.substr(1);
    string answer = removeDuplicates(restOfString);
    if(ch==answer[0]){
        return answer;
    }
    else{
        return ch+answer;
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
    cout<<removeDuplicates(s);
}