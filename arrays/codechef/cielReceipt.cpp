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

    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int sum=p;
        int count=0;
        for(int i=1;i<=12;i++){
            int var=pow(2,i-1);
            int minn= INT_MAX;
            if(p==var){
                count=1;
                break;
            }
            else if(p% var==0){
                count= min(minn,p/var);
            }
            else{
                if(p>var){
                    sum= sum-pow(2,i-1-1);
                    count++;
                    if(sum==var){
                        sum-= var;
                        count++;                   
                        break;
                    }       
                }
            }
        }
        cout<<count<<endl;
    }
}