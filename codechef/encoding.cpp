#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>> s;
        for(int i=0; i<n-1;i=i+2){
            char temp= s[i];
            s[i]=s[i+1];
            s[i+1]= temp;
        }
        for(int i=0;i<n;i++){
            s[i]= 'a' -s[i] + 'z';
        }
        cout << s << endl;
    }
}