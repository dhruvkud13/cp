#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

string moveAllx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string answer= moveAllx(s.substr(1));
    if(ch=='x'){
        return answer+ch;
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
    cout<<moveAllx(s);
}