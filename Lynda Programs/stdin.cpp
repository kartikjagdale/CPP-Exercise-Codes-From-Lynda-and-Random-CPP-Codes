/*Author: Kartik Jagdale */
#include<iostream>
using namespace std; // contains string header file

int main(int argc, char **argv){
 string response; //direct declartion no need of specifing size
 cout<<"Type a String ";
 getline(cin, response); /* Takes more than just a word as input can input multiple lines or multiple words*/
 cout<<"\nString is "<<response<<endl;
 system("pause");
 return 0;   
}
