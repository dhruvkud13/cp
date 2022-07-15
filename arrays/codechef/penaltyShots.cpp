#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < 10; i++)
        {
            // if (a[i] == 1)
            // {
            //     if (i % 2 == 0)
            //     {
            //         sum1++;
            //     }
            //     else
            //     {
            //         sum2++;
            //     }
            // }
            if(i%2==0){
                sum1+= a[i];
            }
            else{
                sum2+= a[i];
            }
        }
        if (sum1 == sum2)
        {
            cout << "0" << endl;
        }
        else if (sum1 > sum2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}