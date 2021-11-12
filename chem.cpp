#include <iostream>
#include <cmath>     //for power(^) exponents
#include <iomanip>    //setprecision for digits after decimal
using namespace std;

double sum(double a, double b){
    return (a+b);
}
double sub(double a, double b){
    return (a-b);
}
double multiply(double a, double b){
    return (a*b);
}
double divide(double a, double b){
    return (a/b);
}

int main()
{
    double a,b;
    cin>>a>>b;
    cout<<fixed;  //It will fix numbers before Decimal point
    cout<<setprecision(4)<<sub(a,b);
    return 0;
}
