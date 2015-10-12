/*
Author: Kartik Jagdale
Title: Structures
Description:
	A data structure is a group of data elements grouped together under one name. 
	These data elements, known as members, can have different types and different lengths. 
	Data structures can be declared in C++ using the following syntax:

Syntax:
	struct type_name {
	member_type1 member_name1;
	member_type2 member_name2;
	member_type3 member_name3;
	.
	.
	} object_names;

One can use Arrays and Pointers too in structures
also there is a concept of Nested Structures.
More details at: "http://www.cplusplus.com/doc/tutorial/structures/"
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//#include<sstream.h> works in Linux
using namespace std;

struct product{
	int weight;
	double price;
} orange ;

void print_details(product name); /* Initialization */

int main(){
	product apple;
	product bannana;
	/* Direct assignment */
	apple.weight = 2;
	apple.price = 70;
	/* User input assignment */
	cout<<"Enter weight for bannana: ";
	cin>>bannana.weight;
	cout<<"\nEnter Price for bannana: ";
	cin>>bannana.price;

	/*Different method for accepting input*/
/*  //Below Input Method Works in Linux
	cout<<"\nEnter weight for orange";
	getline (cin,orange.weight);
	cout<<"\nEnter price for orange";
	getline (cin,orange.price);
*/

	cout<<"\nApple details:"<<endl;
	print_details(apple);
	cout<<"Bannana details:"<<endl;
	print_details(bannana);
	/*
	cout<<"Orange details:"<<endl;
	print_details(orange);
	*/
	system("pause");
	return 0;
}
/*
Print_details Function
*/
void print_details(product name){
	cout<<"Weight: "<<name.weight<<endl;
	cout<<"Price: "<<name.price<<endl;
}