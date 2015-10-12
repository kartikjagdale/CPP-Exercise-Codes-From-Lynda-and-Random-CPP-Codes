/*Author: Kartik Jagdale */
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
int input = 0;
void main()
{
double pi= atan(1)*4; // Gives the Value of Pi.....
clrscr();
cout<<"Please enter how many digits of PI you would like to see(max 20):";
cin>>input;
cout.precision(input);
cout<<pi;

getch();
}
