/*
    Name:Increment and Decrement
    Author Name: Kartik Jagdale
    Description: Increment/Decrement Demo in various aspects
    (i++) : PostFix
    (++i) : PreFix
*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char**argv){
    int i = 5;
    cout<<"I value is "<<i++<<endl; //Output is 5 cause it is postfix expression; it will return the value then incremnet;
    cout<<"I value Now is "<<i<<endl;//Output is 6
    /*Some little trick with the Compliler,Can you predict the output*/
    i = 0;
    printf("%d | %d | %d\n",i,++i,i++);/*Answer is 2 | 2 | 0 */

    /*Some Experiment with Float, Do you Know incremnet also works with float */
    float f = (5.3);
    cout<<"Value of Float f is "<<f<<endl;
    f++;
    cout<<"Value of Float f after increment is "<<f<<endl;
    /*Again Some Fun */

    int j =0;
    /*Below output is No, PostFix incremnet */
    if(j++){cout<<"Yes"<<endl;}
    else {cout<<"No"<<endl;}

    return 0;}
