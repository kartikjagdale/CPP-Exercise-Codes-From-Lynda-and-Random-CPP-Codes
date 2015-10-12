/*
  Author Name: Kartik Jagdale
  Date: 16/08/15 10:36
  Description: Demostartion of Integer Types
*/


#include<iostream>
using namespace std;

int main(int argc, char**argv){
   float f;
   double df;
   long double ldf;
    
    /* Checking their Size */
    
    cout<<"Sizeof float is "<<sizeof(f)<<endl;
    cout<<"Sizeof double float type is "<<sizeof(df)<<endl;
    cout<<"Sizeof long double float type is "<<sizeof(ldf)<<endl;
    /*To check the precision */
    
    f = 0.1;
    f += 0.1;
    f +=0.1;
    cout<<"Value of F is "<<f<<endl; /* Gives 0.3*/
    /* Now comes the interesting part 
    the below if statement gives No;
    */
    if(f == 0.3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    /* Another Experiment*/
    df = 0.3;
    f = 0.3;
    
    if(df == f) cout<<"Yes, Df == f"<<endl;
    else cout<<"No, df != f"<<"\nValue of DF is "<<df<<" and value of f is "<<f<<endl;
    /* Another Expermient*/
    f = 0.3;
    float f1 = 0.3;
    if(f == f1) cout<<"Yes, It is!"<<endl;
    else cout<<"No, It is Not!"<<endl;
    
    /*Another Interesting Expermient */
    df = 0.3;
    df +=0.1;
    df +=0.1;/* df now = 0.5*/
    ldf = 0.3;
    ldf +=0.1;
    ldf +=0.1;/*ldf now = 0.5 */
    if(df == ldf) cout<<"Yes, df==ldf!"<<endl;
    else cout<<"No, df!=ldf!"<<endl;
    /* Its all about Precision, So choose your data types carefully, Best Luck!!!*/
 
    system("pause");return 0;}








