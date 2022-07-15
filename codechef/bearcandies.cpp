#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>> a >> b;
        int c=1;
        int sum1=0,sum2=0;
        while(sum1<=a && sum2<=b){
            if(c%2==1){
                sum1= sum1 + c;
            }
            else{
                sum2= sum2 + c;
            }
            c++;
        }
        if(sum1>a){
            cout << "Bob" << endl;
        }
        else if(sum2>b){
            cout<< "Limak" << endl;
        }
    }
}