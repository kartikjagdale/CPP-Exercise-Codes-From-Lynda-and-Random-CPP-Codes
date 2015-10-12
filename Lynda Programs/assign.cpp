/*
Name: Assignment Operator ( = )
Author: Kartik Jagdale
*/


#include<stdio.h>
#define MAX 10
using namespace std;

struct s{
    char name[MAX];
    int id;
};


int main(int argc, char**argv){

    /* Declaration and Definations */
    int i, j, k;
    struct s s1 = {"Kartik",43}, s2, s3;
    s3 = s2 = s1;

    /*Code*/
    i = 6;
    j = i;
    k = j;

    printf("\nvalue of i is : %d and address is %u",i,&i);
    printf("\nvalue of j is : %d and address is %u",j,&j);
    printf("\nvalue of k is : %d and address is %u",k,&k);

    printf("\n\t\t********************");

    printf("\nValue in S1 are : %s, %d", s1.name,s1.id);
        printf("\nValue in S2 are : %s, %d", s2.name,s2.id);
                printf("\nValue in S3 are : %s, %d", s3.name,s3.id);
printf("\n");

return 0;
}
