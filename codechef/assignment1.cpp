#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

const short N= 40;

inline int
sum(vector <int> data)
{
    return accumulate(data.begin(),data.end(),0);
}

int main()
{
    int accum;
    vector <int> data(N);
    for(int i=0;i<N;i++)
    {
        data[i]=i;
    }
    accum= sum(data);
    cout << "Sum is: " << accum << endl;
}

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

template <typename T>
int sum(T val)
{
	int s = 0;
	for(int i = 0; i < val.size(); ++i)
		s += val[i];
	return s;
}

int main()
{
	vector<int> vec;
	
	for(int i = 0; i < N; ++i)
		vec.push_back(i);
		
	cout<<" sum is "<< sum(vec) << '\n';
	return 0;
}

/*   Convert this program to C++

*   change to C++ io

*   change to one line comments

*   change defines of constants to const

*   change array to vector<>

*   inline any short function

*/

// #include <stdio.h>
// #include <numeric>
// #define N 40

// void sum(int*p, int n, int d[])

// {
//   int i;
//   *p = 0;
//   for(i = 0; i < n; ++i)
//     *p = *p + d[i];
// }

// int main()
// {
//    int i;
//    int accum = 0;
//    int data[N];
//    for(i = 0; i < N; ++i)
//       data[i] = i;
//     sum(&accum, N, data);
//     printf("sum is %d\n", accum); 
//     return 0;
// }