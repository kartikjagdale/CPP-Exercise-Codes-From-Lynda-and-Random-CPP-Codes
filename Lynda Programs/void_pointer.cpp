/*
  Name: Void Pointer 
  Author: Kartik Jagdale
  Date: 17/08/15 21:32
  Description: Demo on Void Pointer
  Here C++ is bit strict about void pointer and passing values around
  you have to cast the value first before passing;
  
  Note : Not Sure What this Program Actually Does, But it Does Something...
*/
#include<iostream>
using namespace std;
void *fp(void *vp){return vp;}
int main(int argc, char**argv){
    char *c = "127";
    printf("%d\n",c);
    int *i = (int *) fp((void *)c);
    printf("%d\n",*i);
    

system("pause");
return 0;
}
