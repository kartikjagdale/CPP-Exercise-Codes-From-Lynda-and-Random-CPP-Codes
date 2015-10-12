/*
  Name: References
  Author: Kartik Jagdale
  Date: 17/08/15 17:15
  Description: Demo of ref types in c++
  concluded pointers and better than references
*/



#include<iostream>

int main(int argc, char **argv){
    int i = 5;
    int & ir = i;
    ir = 43;
    printf("value of i is %d\n",i);
    system("pause");return 0;}
