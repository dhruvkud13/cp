#include <iostream>
using namespace std;
#define ll long long int

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll g = gcd(a[0], a[1]);
        for (int i = 2; i < n; i++)
        {
            g = gcd(a[i], g);
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]/g<<" ";
        }
        cout<< endl;
    }
}