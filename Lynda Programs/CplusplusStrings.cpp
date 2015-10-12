/*
  Author Name: Kartik Jagdale
  Date: 17/08/15 15:18
  Description: Demostration Of C++ Strings /*Contains in String.h which is in namespace std;
*/


#include<iostream>
using namespace std;

int main(int argc, char**argv){
    string cppstring = "This is a C++ string";
    cout<<cppstring<<endl;
    unsigned int i;
    cout<<"Size of C++ string is :"<<sizeof(cppstring)<<endl;/*Gives the wrong answer.. see the cppstring works differently than cstrings */
    /*Just another Expermient, Nothing serious!!! */
    for(i=0;i<cppstring.size();i++){
    cout<<sizeof(cppstring[i])<<"\t";
    }
    cout<<"\n\n";
    
    /* Now to get the size of string */
    cout<<cppstring.size()<<endl;
    
    /* Now to print indivisually*/
    
    for(i=0;i<cppstring.size();i++){printf("%02d is %c\n",i,cppstring[i]);} /* print each char in cppstring*/
    
    /*also cppstrings have functions like  cppstring.begin() and cppstring.end() */    
    
    system("pause");return 0;}
