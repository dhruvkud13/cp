#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int a,b,count=0;
        int r=0;
        cin>> a >> b;
        int sum= a+b;
        while(sum>0){
            int r=sum%10;
            if((r==3||r==2||r==5)){
              count =count+5;}
            else if ((r==0||r==6||r==9)){
              count =count+6;}
            else if (r==4){
              count =count+4;}
            else if (r==7){
              count =count+3;}
            else if (r==8){
              count =count+7;}
             else{
              count=count+2;}
              
             sum = sum/10; 
        }
        cout << count << endl;
    }
}