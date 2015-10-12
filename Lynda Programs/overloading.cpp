/*Name: Overloading of functions
Author: Kartik Jagdale
*/

#include<iostream>
#define MAX 30
using namespace std;
int add(int, int);
float add(float, float);
//char add(char*,char*);
int main(int argc, char**argv){
/*
char *a = "Kartik";
char *b = "Jagdale";
*/
int x, y;
x = 20; y = 30;

float fx, fy;
fx = 20.50; fy = 30.50;


//cout<<"String is"<<add(a,b)<<endl;

cout<<"Addition of Int is "<<add(x,y)<<endl;

cout<<"Addition of float is"<<add(fx,fy)<<endl;


return 0;
}
int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}
/*
char add(char *a, char *b){
       char c[MAX] = strcat(a,b);
       return c;
}
*/
