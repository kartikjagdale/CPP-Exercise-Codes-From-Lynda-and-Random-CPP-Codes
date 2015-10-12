/*Author: Kartik Jagdale */
#include<stdio.h>
#include<conio.h>
void main()
{

int k;
double pi;
clrscr();
printf("Enter the Nth digit values to find the value of pie:(greater than 0 less than 20)");
scanf("%d",&k);

/*if(k>0 && k<20)
   {
	 //break;
   }
else
	printf("invlaid values");
*/
pi = (16^(-k)) * ( 4/(8*k+1) - 2/(8*k+4) - 1/(8*k+5) - 1/(8*k+6) )  ;

printf("%20d",pi)  ;
//return 0;
getch();
}
