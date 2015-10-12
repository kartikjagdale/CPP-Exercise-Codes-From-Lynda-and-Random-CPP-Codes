#include<stdio.h>
#include<iostream>
#include<typeinfo.h>/*Give Type of any variable or object*/
#include<string.h>

using namespace std;

typedef struct s{int i, j, k;}s;

int main(int argc, char ** argv){
    s s1, s2;
    printf("Size of S1 is %d",sizeof(s1));/*its 12 as 4 + 4 +4 */

    printf("\nTypeof S1 is %s",typeid(s1).name());

    printf("\nTypeof S2 is %s",typeid(s2).name());/*Return 1s (depends on compiler) but it definetly means structure, I guess*/

    int i =7;
    printf("\nTypeof i is %s",typeid(i).name());/*return i, means integer*/

/*Lets do some Type casting */


    i = (char) i; /*We are trying to convert i into char*/
    /*Now lest check the typeof(i)*/
    printf("\nTypeof i after type casting is %s and Value is %c",typeid(i).name(), i);/*return i, means integer and no value in %c... i.e it didn't worked very well*/
    printf("\nTypeof i after type casting is %s and Value is %d",typeid(i).name(), i);/*return i, means integer and 7 value in %d... i.e it still is integer */

    /*Now lets take another char type var and use it to store value of i */
    char j;
    j = (char)i;
    printf("\nTypeof i after type casting is %s and Value is %c",typeid(i).name(), i);/*return i, it didn't worked very well Still*/

printf("\n\n");
    printf("\nType of I is %s", typeid((void)i).name());/*This give V i.e Void*/

/*New and Delete*/


    const int n = 100; /*See the constant integer which cant be change now*/
    int *ip = new int[i];/*Allocate a "new" array of size 100*/
    printf("\n\nType of ip is %s",typeid(*ip).name());

    delete [] ip;/*Frees up the location allocated by pointer ip*/
    cout<<"Space at *ip is deleted"<<endl;

    return 0;}
