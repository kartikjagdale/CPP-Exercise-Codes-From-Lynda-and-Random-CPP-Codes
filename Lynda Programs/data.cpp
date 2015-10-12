// To show how to access string from classes and make data members public in order to acces them directly
// without using geters and setters i.e accessors
#include <iostream>
#include<stdio.h>
using namespace std;

class Class1{
public:
        int a;
        string b;
        int c;

};


int main( int argc, char ** argv ) {
	Class1 obj = {1,"Kartik", 2};
	cout << "Wrking copy of Class" << endl;
	printf("a is %d, b is %s, c is %d \n",obj.a, obj.b.c_str(), obj.c);
	return 0;
}
