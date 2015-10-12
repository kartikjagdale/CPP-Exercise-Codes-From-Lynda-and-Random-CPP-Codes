/*
Name: Recursive function
Author: Kartik Jagdale
Description:
Recursvive function is a function that calls itself
*/
#include<iostream>

int fact(int n){
    if(n<2) return 1;
    return n * fact(n-1);
}

int main(int argc, char**argv){
std::cout<<"Factorial is : "<<fact(5)<<std::endl;
return 0;
}
