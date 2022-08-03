// print all possible words from phone digits
#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string answer){
    if(s.length()==0){
        cout<<answer<<endl;
        return;
    }
    char ch=s[0];
    string code= keypadArr[ch-'0'];
    string restOfString= s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(restOfString,answer+code[i]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    keypad("23","");
}