/*
Name: Overloading of Functions
Author: Kartik Jagdale
*/

#include<iostream>
#include<string>
using namespace std;

int func_add(int, int);
float func_add(double, double);
string func_add(string);

int main(){
    string str = "kartik";
cout<<"Addition of 2 + 2 = "<<func_add(2,2)<<endl;
cout<<"Addition of 3.4 + 5.6 = "<<func_add(3.4,5.6)<<endl;
cout<<"Concatenation of Kartik + ! = "<<func_add(str)<<endl;
return 0;
}

int func_add(int a, int b){
    return a+b;
}

float func_add(double a, double b){
    return a+b;
}

string func_add(string a){
    string c = a.append(10,'!');
    return c;

}

