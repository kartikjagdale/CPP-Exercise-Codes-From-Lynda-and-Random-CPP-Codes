/*
Name: Functions
Author: Kartik Jagdale

Description: Call By Value and Call by Reference Demo in C++
*/
#include<iostream>
using namespace std;
int func(int);
void func_ref(int*);
int main(){
int x,*p;
x = 10;
cout<<"\nValue of x in Main is "<<x<<endl;
func(x);
cout<<"Value of x in Main after call to func is "<<x<<endl;
func_ref(&x);
cout<<"Value of x in Main after call to Func_Ref is "<<x<<endl;
return 0;
}

int func(int x){
    x = 5;
    cout<<"Value of x in func is "<<x<<endl;
}

void func_ref(int *x){
    *x = 5;
    cout<<"Value of x in func_ref is "<<*x<<endl;
}
