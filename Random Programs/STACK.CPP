/*Author: Kartik Jagdale */

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
#define TRUE 1
#define FALSE 0

class stack
{
//Private Members of Class
int data[MAX];
int top;

public:
	void initialize() {top=-1;}
	void push(int x) {data[++top]=x;}
	int pop() {return(data[top--]);}
	int empty() {if(top== -1)
					return TRUE;
				return FALSE;
				}
	int full() {
				if(top==MAX-1)
					return TRUE;
				return FALSE;
				}
	void show(){
		 int count;
		 for(count=0;count<=top;count++){
				 cout<<data[count]<<"\t";
				 }
		 }

};



int main(){
	char ans,ch;
	int x;
	stack s;
	s.initialize();
	do{
		cout<<"\nMENU:\n1.PUSH\n2.POP\n3.CHECK FULL\n4.CHECK EMPTY\n5.SHOW STACK\n6.Exit\n";
		cout<<"Enter a Choice: ";
		cin>>ch;
		switch(ch){
			case '1':
				cout<<"Enter a Number ";
				cin>>x;
				if(!s.full()){
					s.push(x);
					cout<<"\nPushed Successfully";
					}
				else{
					cout<<"\n Stack is Full !!!";
					}
					break;
			case '2':
					if(!s.empty()){
					cout<<s.pop();
					}
				else{
					cout<<"\n Stack is Empty !!!";
					}
					break;
			case '3':
					if(s.full()){
						cout<<"Stack is Full!!!\n";
					}
					else{
						cout<<"Stack is not full\n";
					}
					break;
			case '4':
				if(s.empty()){
							cout<<"Stack is Empty!!!\n";
						}
						else{
							cout<<"Stack is not Empty\n";
						}
						break;
			case '5':
				if(!s.empty()){
					s.show();
				}
				else{
					cout<<"Stack is Empty!!!\n";
					
				}
				break;
			default:
				cout<<"Please Enter a Valid Choice!!!\n";
				break;
		}
	}while(ch!='6');
cout<<"\nThank you for visiting us!!!\n";
system("pause");
return 0;

}
