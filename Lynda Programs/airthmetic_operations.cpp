
/*

Name: Airthemtic Operations
Author: Kartik Jagdale
*/

#include<iostream>
#include<stdio.h>
using namespace std;


int main(int argc, char**argv){
    int i , j, k, op;

    printf("\nEnter Value for I and J: ");
    scanf("%d %d",&i, &j);
    printf("\nNegative value are : %d %d",-i, -j);
do{
    printf("\nMenu:\n1.Addition\n2.Substraction\n3.Divison\n4.Multiplication\n5.Exit\nYour Choice: ");
    scanf("%d",&op);

    switch(op){
    case 1:
        printf("\nAddition is %d",(i)+(j));
        break;
    case 2:
        printf("\nSubstraction is %d",(i)-(j));
        break;
    case 3:
        printf("\nDivison is %d",(i)/(j));
        break;
    case 4:
        printf("\nMutiplication is %d",(i)*(j));
        break;
    case 5:
        break;

    default:
        printf("\nInvalid Choice");
        break;
    }

}while(op!=5);


    return 0;}
