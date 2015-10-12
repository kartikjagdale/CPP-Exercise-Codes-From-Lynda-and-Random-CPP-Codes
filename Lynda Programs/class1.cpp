/*
Name: Second Demo of class1
Author: Kartik Jagdale

*/

#include<iostream>
#include<stdio.h>
using namespace std;


class A{
int i;
string str;
public:
    A (int value, const string & s) : i(value), str(s){};// constructor
    // setters
    void setvalue(int value) {i = value;}
    void setstr(const string & s) {str = s;}
    //geters
    int get_value() {return i;}
    string get_str() {return str;}

    const char *get_str_cstr() {return str.c_str();}// I didn't get why we have to declare constant


};

int main(){
// new code
A obj1 = {11, "kartik"};

cout<<"value is : "<<obj1.get_value()<<" string is "<<obj1.get_str()<<endl;

// Now we wil change the values in A
obj1.setvalue(2);
obj1.setstr("Jagdale");
cout<<"value after change is : "<<obj1.get_value()<<" string after change is "<<obj1.get_str()<<endl;

// now we will use printf where get_str dosen't not work


//Error: for below commented printf function
/*In function 'int main()':|
error: cannot pass objects of non-trivially-copyable type 'std::string {aka class std::basic_string<char>}' through '...'|
||=== Build finished: 1 errors, 0 warnings (0 minutes, 0 seconds) ===|
*/

//printf("Value is %d and String is %s",obj1.get_value(),obj1.get_str());

// hence we declare a new char * get_str_cstr to make it work in printf;

printf("Value is %d and String is %s",obj1.get_value(),obj1.get_str_cstr());

return 0;}
