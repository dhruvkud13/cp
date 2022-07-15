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

    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int currlen=0;
    int maxlen=0;
    int start=0,maxstart=0;

    while(1){
        if(a[i]== ' ' || a[i]== '\0'){
            if(currlen>maxlen){
                maxlen=currlen;
                maxstart= start;
            }

            currlen=0;
            start= i+1;
        }
        else
        currlen++;
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<< a[i+maxstart];
    }
}