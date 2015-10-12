/*
  Author Name: Kartik Jagdale
  Date: 17/08/15 15:47
  Description: Escape Sequence
*/
#include<iostream>
using namespace std;

int main(int argc, char**argv){
    string str = "This is \' \" \\ \x4580 \u03bc \n \t a string";
    /* See above the backslash symbol '\' is used as escape sequence to print special cases withour conflict
    like ' " \ ,unicode characters, hexadecimal characters etc...  */ 
    cout<<"String is \n"<<str<<endl;
    system("pause");return 0;}
