/*
  Name: Qualifiers
  Author: Kartik Jagdale
  Date: 17/08/15 16:04
  Description: Demostration of Qualifiers
  Two Types:
      Storage Class: static, register, extern
      Type Qualifier: const, volatile, mutable(only in c++)
*/

#include<iostream>
using namespace std;

int main(int argc, char**argv){
    int i;
    for(i=0;i<5;++i){
    static int j = 12; /* Static and carries its value througout the block that is once changed carries it through entire lifecycle of the program*/
    j +=i;
    cout<<"i : "<<i<<" j : "<<j<<endl;
    }
    const int maza = 10; /* constant and immutable */
    /* Below Statement's gives error as we cant change the constatnt variable */
    /*
    printf("This is New Exp. with Const static qualifiers\n\n");
    for(i=0;i<5;++i){
    const static int j = 12;
    j +=i;
    cout<<"i : "<<i<<" j : "<<j<<endl;
    }
    */
    system("pause");return 0;}
