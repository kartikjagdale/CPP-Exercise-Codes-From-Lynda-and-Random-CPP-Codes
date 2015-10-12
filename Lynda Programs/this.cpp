/*
Name: Demo of This keyword
Author: Kartik Jagdale
*/
#include<iostream>
using namespace std;

class A{
    int ia;
public:
    A(): ia(0){};// have to set implictly 0 in constructor otherwise you get garbage value
    void setA(const int a);
    int getA();
    void lookAtThis(const int ia);

};
void A::setA(const int a) {
    ia = a;
}
int A::getA(){
    cout<<"This is mutable version of getA"<<endl;
    return ia;
}

void A::lookAtThis(const int ia){
    cout<<"value of ia is "<<ia<<endl; // this doesnt give the value from the class ia but passed ial
    // hence to get the value of class ia we use "this" keyword ,really imp.
    cout<<"Value of ia in object is "<<this->ia<<endl;
    cout<<"And address in \"This\" pointer is "<<this<<endl;

}

int main(int argc, char**argv){
A a;
cout<<"Value of a is : "<<a.getA()<<endl; // trying to getA before assignment
a.setA(42);
cout<<"Value of a is : "<<a.getA()<<endl;
a.lookAtThis(100);
cout<<"Address of object is : "<<&a<<endl; // this pointer and a has same address
return 0;
}
