/*Author: Kartik Jagdale */
#include<iostream>
using namespace std;
/*
The enum keyword is used to create an enumerated type named name that consists of the elements in name-list. 
The var-list argument is optional, and can be used to create instances of the type along with the declaration. 
For example, the following code creates an enumerated type for colors

Syntax:
       enum name {name-list} var-list;
*/
enum ColorT {red, orange, yellow, green, blue, indigo, violet}; 
/* enum sets each color value in consecutive manner like red = 0, orange = 1 and so on..
you can also give user defined values to the keys.
 */

int main(){
    
    ColorT c1 = indigo; /*Note you don't have to specify extra "type enum" for evry instance*/
    cout<<"Value of Indigo is "<<indigo<<endl;
    if(c1 == indigo){
          cout<<"c1 is indigo"<<endl; /* endl works same as <<flush<<"\n" is equivalent to "endl" */
          }
    system("pause");
    return 0;
}
