/*
Name: Function Pointers:
Author: Kartik Jagdale

Dscription: Demo of Func pointer using Vector as storage in C++;

*/


#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


void a(){printf("\nThis is a()\n");}
void b(){printf("\nThis is b()\n");}
void c(){printf("\nThis is c()\n");}
void d(){printf("\nThis is d()\n");}
void e(){printf("\nThis is e()\n");}

vector<void (*)()>func_ptr = {a,b,c,d,e};

int prompt();
int jump(const string &);//Using Reference operator;


int main(int argc, char **argv){
    while(prompt());
    cout<<"\nDone"<<endl;
return 0;
}


int prompt(){
        cout<<"\nMenu:"<<endl
        <<"1.Func a()"<<endl
        <<"2.Func b()"<<endl
        <<"3.Func c()"<<endl
        <<"4.Func d()"<<endl
        <<"5.Func e()"<<endl
        <<"Q.Quit"<<endl
        <<">> ";
        string response;
        cin>>response;
        return jump(response);
}


int jump(const string & response){
        char code = response[0];
        if(code == 'q' || code == 'Q') return 0;

        unsigned int i = (int) code-'0';
        --i;
        if( ( i < 0 ) || ( i > 8 ) ) {
		cout << "invalid choice" << endl;
		return (1);}

        if(i<func_ptr.size()){
                func_ptr[i]();
                return(1);
        }
        else{
            cout<<"Invalid Choice !!!"<<endl;
            return(1);
        }

}

