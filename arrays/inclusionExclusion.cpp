#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// how many nos between 1 and 1000 are divisible by 5 or 7
int divisble(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}

int gdcEuclid(int c,int d){
    while(d!=0){
        int rem= c%d;
        c=d;
        d=rem;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisble(n,a,b)<<endl;
    int c,d;
    cin>>c>>d;
    cout<<gdcEuclid(c,d)<<endl;
}