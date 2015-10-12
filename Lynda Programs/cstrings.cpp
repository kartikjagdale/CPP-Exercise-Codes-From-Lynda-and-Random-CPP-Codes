/*
  Author Name: Kartik Jagdale
  Date: 17/08/15 12:23
  Description: Demostration of C Strings
*/

#include<iostream>
using namespace std;
int main(int argc, char**argv){
    char cstring[] = "String";
    
    cout<<"Size of CString is "<<sizeof(cstring)<<endl;
    unsigned int i;
    for(i = 0;cstring[i];i++){
          printf("%02d is %c\n",i,cstring[i]);
          }
          
    /*Few basic Operations on Ctrings */
    cout<<endl;
    char email[] = "kartikjagdale11@gmail.com";
    cout<<"Size of CString(email) is "<<sizeof(email)<<endl;
    cout<<"CString(email) is "<<email<<endl;
    
    /* To find digit in string*/
    for(i =0;email[i];i++){
          /*The function isdigit() returns non-zero if its argument is a digit between 0 and 9. Otherwise, zero is returned. */
          if(isdigit(email[i])){printf("%c",email[i]);} 
          
          }
          cout<<endl;
    
    
    system("pause");return 0;}
