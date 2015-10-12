/*
Name: Operator Overloading in Cpp for classes
Author:Kartik Jagdale

its 29 sep 12:00 am, Today is my Birthday, and I am coding, Coders life!!!


*/

#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

class con{
char *str;
public:
    con(char *str): str(str){};
    char *value(){
        cout<<"Value of str is: "<<str<<endl;// here we see it returns only first charscter of string
        cout<<"Size of str is: "<<sizeof(str)<<endl;
        cout<<"Lenth of string is "<<strlen(str)<<endl;
        printf("\n%s : %u\n",str, str);// c string really works weired ,hard to understand
        return str;}
    ~con(){cout<<"Destructor called"<<endl;
        cout<<"value of str now is "<<str<<endl;
    };
};






class A{
int a;

public:
    A(int a) : a(a) {}; //constructor overloaded
    float value(){return (float(a)+0.1);}
};

//Now we will try to overload operator +

float operator + (A &lhs, A &rhs){
    cout<<"Now adding Two Class obejcts of A by using overladed + operator: "<<endl;
    return lhs.value() + rhs.value(); // calling function value from class A's object
}




class C{
    string a;
public:
        C(string c): a(c){};
        string value(){return a;}
};

string operator + (C &lhs, C &rhs){

    cout<<"Now concating two string"<<endl;
    string str3 = lhs.value() + " " + rhs.value();
    return str3;
}


int main(int argc, char **argv){

//cout<<"Addition of 2+2 = "<<2+2<<endl;// normally + will add two integers

// Now will check on classes
/*A a(32);
A b(42);
// Now will try to add objects of two classes

cout<<"Trying two add two objects of A i.e a(32) and b(42): "<<endl<<a+b<<endl; // Dosent work unless you overload an operator '+'
cout<<"Value of a is "<<a.value()<<endl;
cout<<"Value of a is "<<b.value()<<endl;

*/

//create object of String class C
//string str = "Kartik", str2 = "jagdale";
/*C obj(str);
C obj2(str2);

cout<<"Value of object is "<<obj.value()<<endl;
cout<<"Value of object2 is "<<obj2.value()<<endl;

cout<<"Concatenation of two objects is "<<(obj + obj2)<<endl;
*/
// Experimentaion with C strings

char *str;
char *str1;

cout<<"Enter value for str: ";
cin>>str;
/*
cout<<"Enter value for str1: ";
cin>>str1;
*/
//cout<<"Concatenation is :"<<strcat(str, str1)<<endl;
//Lets try to make a class which returns a cstrings

con obj(str);
cout<<"Value of string is obj is: "<<obj.value()<<endl;

cout<<"Value of string again is obj is: "<<obj.value()<<endl;

return 0;
}
