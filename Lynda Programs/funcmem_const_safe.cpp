/*
Name: Demo of const safe function
Author: Kartik Jagdale
*/
#include<iostream>
using namespace std;

class A{
    int ia;
public:
    void setA(const int a);
    int getA();
    int getA() const;

};
void A::setA(const int a) {
    ia = a;
}
int A::getA(){
    cout<<"This is mutable version of getA"<<endl;
    return ia;
}

// overloaded getA and made it const safe
int A::getA() const{
    cout<<"This is a const safe version of getA"<<endl;
return ia;}



int main(int argc, char**argv){
A a;
a.setA(42);
cout<<"Value of a is : "<<a.getA()<<endl;
const A b = a;
cout<<"Value of b is : "<<b.getA()<<endl;

return 0;
}
