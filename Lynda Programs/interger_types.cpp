/*
  Author Name: Kartik Jagdale
  Date: 16/08/15 10:36
  Description: Demostartion of Integer Types
*/


#include<iostream>
using namespace std;

int main(int argc, char**argv){
    char c;
    int i;
    unsigned int ui;
    short int si;
    unsigned short int usi;
    long int li;
    unsigned long int uli;
    long long int lli;
    unsigned long long int ulli;
    
    
    /* Checking their Size */
    
    cout<<"Sizeof Char type is "<<sizeof(c)<<endl;
    cout<<"Sizeof Integer type is "<<sizeof(i)<<endl;
    cout<<"Sizeof unsigned integer type is "<<sizeof(ui)<<endl;
    cout<<"Sizeof short int type is "<<sizeof(si)<<endl;
    cout<<"Sizeof unsiged short int type is "<<sizeof(usi)<<endl;
    cout<<"Sizeof long int type is "<<sizeof(li)<<endl;
    cout<<"Sizeof unsiged long int type is "<<sizeof(uli)<<endl;
    cout<<"Sizeof long long int type is "<<sizeof(lli)<<endl;
    cout<<"Sizeof unsigned long long int type is "<<sizeof(ulli)<<endl;
    
    system("pause");return 0;}








