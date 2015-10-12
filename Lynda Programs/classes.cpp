/*
Name: Classess Demo;

Author: Kartik Jagdale
Description Basic Implementaion of Class
*/


#include<iostream>
using namespace std;

typedef struct get {
    string type;
    string speak;
    int num_legs;
    bool is_tail;

}get;
get g;

class Animal{
    //private members by default
    string type;
    string speak;
    int num_legs;
    bool is_tail;
public:
    Animal();//default constructor
    Animal(const string &T,const string &S,int n, bool i): type(T),speak(S),num_legs(n),is_tail(i) {}; // parametrised constructor

    ~Animal(){ //Destructor see the ~ symbol that identifies destructor;
        cout<<"Detructor Called"<<endl;
    };
    void set_type(string &t) {type = t;} //seters
    string get_type() {return type;} // geters
    bool istail() {return is_tail;}
    void get_prop() {
        g.type = type;
        g.speak = speak;
        g.num_legs =  num_legs;
        g.is_tail = is_tail;
    }

};


int main(){
Animal fluppy("Dog","bawbaw",4,true);
cout<<"Type of Fluppy is: "<<fluppy.get_type()<<endl;
if(fluppy.istail() == true){
    cout<<"Fluupy has a tail"<<endl;

}
else{

    cout<<"Fluupy has No Tail"<<endl;
}
fluppy.get_prop();
cout<<"Fluupy is of type "<<g.type<<" and speaks "<<g.speak<<" and has "<<g.num_legs<<" legs"<<endl;
return 0;}
