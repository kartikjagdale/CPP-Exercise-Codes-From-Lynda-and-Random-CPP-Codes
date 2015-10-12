/*
  Name: Structure
  Author: Kartik Jagdale
  Date: 17/08/15 17:31
  Description: Demo of Structure
*/
#include<iostream>
using namespace std;

struct emp{
       int id;
       char *name;
       char *role;
       };
       
/* Use typedef so that you dont have to use keyword struct everytime*/ 
typedef struct cmpy{
        char *cmpname;
        };

int main(int argc, char **argv){
    struct emp ep; /* we have to use struct keyword everytime in C */
    emp ep1 = {42,"Karry","Design Engineer"}; /*You can pass the values like that */
    emp *eptr = &ep; /* We can create pointer of this structures too */
    
    /* Compnay Structure declaration */
    cmpy kodak; /* See in C you dont have to use keyword struct as you have used typedef*/
    kodak.cmpname = "kodak";
    printf("%s\n",kodak.cmpname);
    
    ep.id = 43;
    ep.name = "Makar";
    ep.role = "Project Enginner";
    printf("%s id is %d and his role is %s\n",ep.name, ep.id, ep.role);
    printf("%s id is %d and his role is %s\n",ep1.name, ep1.id, ep1.role);    
    /*The Below is printed using pointer */
    printf("%s id is %d and his role is %s\n",eptr->name, eptr->id, eptr->role);    
        
    system("pause"); return 0;}
