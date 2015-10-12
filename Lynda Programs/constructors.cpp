/*
Name: Constructors Demo
Author: Kartik Jagdale

*/

#include<iostream>
using namespace std;

const static string unk = "None";
const static string clone = "Copy-of-";

class Animal{
    //by default private
    string _type;
    string _name;
    string _speak;

    public:
        Animal(); // default Constructor
        Animal(const string &type, const string &name, const string &speak); // parametrised constructor

        Animal(const Animal &a); // overloaded copy constructor
        ~Animal();


        void print() const;

        Animal &operator=(const Animal &a); // assignment operator overloaded
};

//Actual Definations
Animal::Animal(): _type(unk),_name(unk),_speak(unk){
    cout<<"Default Constructor"<<endl;
} // the statements after ':' are constructor initializers

Animal::Animal(const string &type, const string &name, const string &speak)
// initializer list
        :_type(type),_name(name),_speak(speak)
{
   cout<<"Parametrised Constructor"<<endl;
}

Animal::Animal(const Animal &a){
    cout<<"copy constructor"<<endl;
    _name = clone + a._name; //clone for observing that its a copy
    _type = a._type;
    _speak = a._speak;
}

Animal::~Animal(){
    cout<<"Destructor Called !!!"<<endl;
}

// assigment operator overloading
Animal &Animal::operator =(const Animal &a){
    cout<<endl;
    cout<<"Assignment operation"<<endl;
   // cout<<"value of a is "<<a<<endl;
    cout<<"value of &a is "<<&a<<endl;
    cout<<"value of THIS is "<<this<<endl;
    cout<<endl;
    if(this != &a){
        _type= a._type;
        _speak = a._speak;
        _name = clone + a._name;
    }
    return *this;

}


void Animal::print() const
{
cout<<_name<<" the "<<_type<<" says "<<_speak<<endl;
}






int main(int argc, char **argv){
Animal a;
a.print();
Animal b = {"Dog","Fluppy","BawBaw"};
b.print();
Animal c = b;
c.print();
c = c;
c.print();
/*Animal d;
d = c;
d.print();
*/

return 0;}
