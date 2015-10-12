/*
Name: Rational
Author: Kartik Jagdale

*/


#include<iostream>



class rational{
    int _n;
    int _d;
    public:
        rational(int numerator = 0, int denominator = 1): _n(numerator), _d(denominator){};
        rational(const rational &rhs): _n(rhs._n), _d(rhs._d) {}; //copy constructor
        ~rational();
        inline int numerator() const { return _n; };
        inline int denominator() const { return _d; };

        rational & operator =(const rational &);
        rational operator +(const rational &) const;
        rational operator -(const rational &) const;
        rational operator /(const rational &) const;
        rational operator *(const rational &) const;

};

rational &rational::operator =(const rational &rhs){
    std::cout<<"Assignemnt operation"<<std::endl;
    if(this!=&rhs){
        _n = rhs.numerator();
        _d = rhs.denominator();
        }
    return *this;
}

rational rational::operator +(const rational &rhs) const{
    return rational((_n *rhs._d)+ (_d*rhs._n),_d*rhs._d);

}


rational rational::operator -(const rational &rhs) const{
    return rational((_n *rhs._d) - (_d*rhs._n),_d*rhs._d);

}



rational rational::operator *(const rational &rhs) const{
    return rational((_n*rhs._n),(_d*rhs._d));
}


rational rational::operator /(const rational &rhs) const{
    return rational((_n *rhs._d) , (_d*rhs._n));

}


rational::~rational(){
std::cout<<"Destructor: "<<_n<<"/"<<_d<<std::endl;
}


//oevrloading std::cout's << operator
std::ostream &operator <<(std::ostream &o,const rational &r){

    return o<<r.numerator()<<"/"<<r.denominator();
}


int main(int argc, char**argv){
using namespace std;

    rational a = 7; // 7/1 by default;
    cout<<"A is "<<a<<endl;

    rational b = 8;
    cout<<"B is "<<b<<endl;

    cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl<<endl;

    cout<<"Substraction off "<<a<<" and "<<b<<" is "<<a-b<<endl<<endl;

    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl<<endl;

    cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl<<endl;

    rational &c = b;
    b = c;
    cout<<"C is "<<c<<endl;

return 0;}
