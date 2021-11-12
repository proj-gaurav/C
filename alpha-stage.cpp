#include <iostream>
#include <cmath>   //for power(^) exponents
#include <iomanip> //setprecision for digits after decimal
using namespace std;

double sum(double a, double b)
{
    return (a + b);
}
double sub(double a, double b)
{
    return (a - b);
}
double multiply(double a, double b)
{
    return (a * b);
}
double divide(double a, double b)
{
    return (a / b);
}

int main()
{
    double a, b, result;
    char opr;
    cout << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;
    cout << fixed; //Works only for Digits after decimal
    cout << setprecision(4);
    cout << "Enter Your Operator : ";
    cin >> opr;
    
    // Using If-else for operators //
    if (opr=='+')
    {
        result = sum(a, b);
        cout<<"Your Answer : "<<result<<endl;
    }
    else if (opr=='-')
    {
        result = sub(a, b);
        cout<<"Your Answer : "<<result<<endl;
    }
    else if (opr=='*')
    {
        result = multiply(a, b);
        cout<<"Your Answer : "<<result<<endl;
    }
    else if (opr=='/')
    {
        result = divide(a, b);
        cout<<"Your Answer : "<<result<<endl;
    }
    cout<<endl;
    return 0;
}
