/*
  Name: Bitfields
  Author: Kartik jagdale
  Date: 17/08/15 18:05
  Description: Bitfields Demo in Structure
*/

#include<iostream>
using namespace std;

struct family{
       bool haschild : 1; /* See the colon and number of "bits" assigned thats the format of bitfields*/
       unsigned int numchild : 4;/*As Norma family member wont have more than 16 childrens so */
       };

int main(int argc,char**argv){
    family jackson;
    jackson.haschild = true;
    jackson.numchild = 2;
    if(jackson.haschild){printf("Has %d children\n",jackson.numchild);}
    else{printf("No Children\n");}    
    system("pause");return 0;}
