#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    // int n;
    // cout << "enter no:";
    // cin >> n;
    // cout << "the no is: " << n << endl;

    // bool x= true;
    // cout << "answer is: " << x << endl;

    // char a= 35;
    // cout << a;

    // string b = "hi";
    // cout << b << endl;

    cout << sqrt(64) << endl;

    string fname;
    cout << "enter name: ";
    getline(cin,fname);
    cout << "name is: " << fname;

    // string fullName;
    // cout << "Type your full name: ";
    // getline (cin, fullName);
    // cout << "Your name is: " << fullName;

    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "HELLO THERE";

    // Close the file
    MyFile.close();
}