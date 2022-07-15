// #include <iostream>  
// using namespace std;  
  
// int main ()  
// {  
//     int n,temp, i, j;   
//     cin >> n; 
//     int arr[n];   
//     for (i = 0; i < n; i++)  
//     {  
//         cin >> arr[i];  
//     }   
//     for ( i = 0, j = n - 1; i < n/2; i++, j--)  
//     {     
//         temp = arr[i];  
//         arr[i] = arr[j];  
//         arr[j] = temp;  
//     }   
//     for ( i = 0; i < n; i++)  
//     {  
//         cout << arr[i] << " ";  
//     }  
//     return 0;  
// } 

#include <iostream>
#include<cmath>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n, A=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        A+=pow(-1, i)*arr[n-1-i]*arr[n-1-i];
    }
    cout<<A<<endl;
}
return 0;
}