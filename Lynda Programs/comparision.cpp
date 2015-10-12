
/*

Name: Comparision Operations
Author: Kartik Jagdale

Description:
    Program was created for fun and coz Programmer was bored and had nothing to do so,
    the Stupidity seen in the program is no way concerned or is in connection with the programmers brain condition.
*/

#include<iostream>
#include<stdio.h>
using namespace std;


int main(int argc, char**argv){
    int i, j , op;

    printf("\nEnter value for I, J : ");
    scanf("%d %d",&i, &j);
    printf("\nNote: Comparision will happen between I and J Only");
    do{
        printf("\nMENU:\n1.Greater Than\n2.Less Than\n3.Greater Than Equal To\n4.Less Than Equal To\n5.IsEqual To\
\n6.Not Equal To\n7.Exit\nYourChoice: ");
    scanf("%d",&op);

    switch(op){
    case 1:
        if(i>j){cout<<"I is greater"<<endl;}else{cout<<"J is greater"<<endl;}break;
    case 2:
        if(i<j){cout<<"I is Less"<<endl;}else{cout<<"J is Less"<<endl;}break;
    case 3:
        if(i>=j){cout<<"I is greater or Equal"<<endl;}else{cout<<"J is greater or Equal"<<endl;}break;
    case 4:
        if(i<=j){cout<<"I is Less or Equal"<<endl;}else{cout<<"J is Less or Equal"<<endl;}break;
    case 5:
        if(i==j){cout<<"I and J are Equal"<<endl;}else{cout<<"I and J are Not Equal"<<endl;}break;
    case 6:
        if(i!=j){cout<<"I and J are Not Equal"<<endl;}else{cout<<"I and J are Equal"<<endl;}break;
    case 7:
        break;
    default:
        printf("\nInvalid Choice !!!");
        break;}
    }while(op!=7);



return 0;
}
