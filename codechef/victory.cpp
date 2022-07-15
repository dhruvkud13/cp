#include <iostream>
using namespace std;
int main()
{
    int r,o,c;
    cin>> r>>o>>c;
    if((20-o)*36 > r-c){
        cout<< "yes";
    }
    else{
        cout<< "no";
    }
}