/*
Name: Bitwise Operators Demo
Author: Kartik Jagdale
*/


#include<stdio.h>
#include<iostream>
#include <bitset>
using namespace std;



int main(int argc, char**argv)
{
/*
These operators all work with bitsets. They can be described as follows:
{ !=, ==, &=, ^=, |=, ~, <<=, >>=, [] }
!= returns true if the two bitsets are not equal.
== returns true if the two bitsets are equal.
&= performs the AND operation on the two bitsets.
^= performs the XOR operation on the two bitsets.
|= performs the OR operation on the two bitsets.
~ reverses the bitset (same as calling flip())
«= shifts the bitset to the left
»= shifts the bitset to the right
[x] returns a reference to the xth bit in the bitset.
For example, the following code creates a bitset and shifts it to the left 4 places:
*/

    bitset<8>bs2((long)10);
    cout<<"Value of BS2 is "<<bs2<<endl;

    /* After left shift */
    bs2 <<= 1;
    cout<<"Value of BS2 After 1 Left shift is "<<bs2<<endl;

    /*After right shift */
    bs2 >>= 1;

    cout<<"Value of BS2 After 1 Right shift is "<<bs2<<endl;

    /*Lets try bitwise OR (|)*/
    bitset<8>bs3((long)12);

    printf("\nOr Operaton betwn Bs2 and Bs3 is %d",(bs2|bs3));/*Something Fisht ;I am Not able to do this, wrong example dont Follow this  */

    /*Lets Try Bitwise XOR (^)*/
    cout<<"\nAgain Value of BS2 is "<<bs2<<endl;

    bs2 = bs2^bs2;
    cout<<"Bitwise XOR on Bs2 is "<<bs2<<endl;/*Didin't get what this did :( */

    /*Now lets try Bitwise NOT ~ i.e telda, Hope it works*/
    bs2 = 10;
    cout<<"\nAgain Value of BS2 (before Not operation)is "<<bs2<<endl;
    bs2 = ~bs2;
    cout<<"Bitwise Not on bs2 is "<<bs2<<endl;
    /*Yipeeee Bitwise Not(~) Works*/
return 0;
}
