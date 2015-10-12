#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;


int main() {
    char str[] = "Hello";
    char s[] = {'H','E','L','L','O',NULL};
    string str1 = "Hello";
    char *p = str;
    int n = 10;
    cout<<sizeof(str)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(n)<<endl;
    cout<<str1.size()<<endl;
    cout<<sizeof(str1)<<endl;
    return 0;
}
