#include <iostream>
#include <cmath>   //for power(^) exponents
#include <iomanip> //setprecision for digits after decimal
using namespace std;

// Using Functions //
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

int main(void)
{
    start:
    double a, b, result;
    char opr;
    cout << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;
    cout << fixed; //Works only for Digits after decimal //
    cout << setprecision(4); //It will fix 4 digits after decimal //
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
    
    int it = result;
    string int_str = to_string(it);
    int n_divisor = int_str.length() - 1;
    double divisor = result / pow(10, n_divisor);
    cout << divisor << " x 10^" << n_divisor << endl;
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    char retry ;
    cout << "Do you want to retry (y/n) : ";
    cin >> retry ;

    if (retry == 'y')
    {
        cout<<endl;
        cout<<endl;
        goto start;
    }
    else if(retry == 'n')
    {
        cout<<endl;
        cout<<endl;
        cout << "Thank you! :)";
        cout<<endl;
        cout<<endl;
    }
    cout << endl;
}
