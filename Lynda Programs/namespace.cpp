/*
Name: NameSpace
Author: Kartik Jagdale
Description:
    namespace demo

*/
#include<iostream>

namespace BWstring {
const std::string bws = "This is an Empty string";

class string{
    std::string s;
public:
        string (void): s(bws) {};
        string (const std::string & _s): s(_s) {};
        operator std::string & (void) {return s;};

};

};

BWstring::string s1("This is a Not an Empty String");

int main(){
std::string s = s1;
std::cout<<s<<std::endl;
return 0;}
