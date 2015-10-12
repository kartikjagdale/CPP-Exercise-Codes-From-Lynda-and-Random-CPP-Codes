/*Author: Kartik Jagdale */
/*The static keyword can be used in four different ways: 

to create permanent storage for local variables in a function,
to create a single copy of class data,
to declare member functions that act like a non-member functions, and
to specify internal linkage.

*/
#include<iostream>
using namespace std;
/*
Permanent storage
Static local variables keep their value between function calls. 
For example, in the following code, a static variable inside a function is used to keep track of how many times that function has been called: 
*/
void foo1(){
     static int counter = 0;
    cout<<"Foo Called "<<++counter<<" times"<<endl;    
     }
/*
Single copy of class data
When used in a class data member, all instantiations of that class share one copy of the variable
*/
class foo{
      public:
             foo(){
                   ++numfoos;
                   cout<<"Number of foo's created are "<<numfoos<<endl;

                   }
// Staic function
     static int getNumFoos() {
            return numfoos;
            }

      private:
              static int numfoos ; 
      };
int foo::numfoos = 0; // allocate memory  for numFoos and intialize it;

int main(){
    //int i;
   /* for(i =0;i<10;i++){
          foo1();
}*/
    foo f1;
    foo f2;
    foo f3;
    /*
    Class functions callable without an object
    When used in a class function member, the function does not take an instantiation as an implicit this parameter, 
    instead behaving like a free function. This means that static class functions can be called without creating instances of the class: 

    */
    cout << "So far, we've made " << foo::getNumFoos() << " instances of the Foo class\n";
    
 system("pause");
 return 0;   
}
