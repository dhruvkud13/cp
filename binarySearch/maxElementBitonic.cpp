#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int findMax(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    if(n==1){
        return 0;
    }
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (mid != start && mid != end && arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (mid != end && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (mid != start && arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
        }
        // for edge cases
        else if (mid == start && arr[mid] > arr[mid + 1])
        {
            return start;
        }
        // for edge cases
        else if (mid == end && arr[mid] > arr[mid - 1])
        {
            return end;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findMax(arr,n);
    cout<<"max element is "<<ans;
}