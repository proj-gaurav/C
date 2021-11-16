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

numerator_initialize:

    double a_n, b_n, result_n;
    char opr_n;
    cout << endl;
    cout << "For Numerator ->" << endl;
    cout << "Enter First Value : ";
    cin >> a_n;
    cout << "Enter Second Value : ";
    cin >> b_n;
    cout << fixed;           //It will only fix digits after decimal //
    cout << setprecision(4); //It will fix 4 digits after decimal //
    cout << "Enter Your Operator : ";
    cin >> opr_n;

    // Using If-else for operators in Numerator//
    if (opr_n == '+')
    {
        result_n = sum(a_n, b_n);
        cout << "Your Answer For Numerator : ";
    }
    else if (opr_n == '-')
    {
        result_n = sub(a_n, b_n);
        cout << "Your Answer For Numerator : ";
    }
    else if (opr_n == '*')
    {
        result_n = multiply(a_n, b_n);
        cout << "Your Answer For Numerator : ";
    }
    else if (opr_n == '/')
    {
        result_n = divide(a_n, b_n);
        cout << "Your Answer For Numerator : ";
    }

numerator_calculations:
    int ne = result_n;      // Converting Double to Int
    string int_ne_str = to_string(ne);    // Converting Int to String
    int ne_divisor = int_ne_str.length() - 1;
    double nu_divisor = result_n / pow(10, ne_divisor);      //Reconverting Int to Double and Dividing it by 10 to power d_divisor
    cout << nu_divisor << " x 10^" << ne_divisor << endl;        // Final Output

denominator_initialize:

    double a_d, b_d, result_d;
    char opr_d;
    cout << endl;
    cout << "For Denominator ->" << endl;
    cout << "Enter First Value : ";
    cin >> a_d;
    cout << "Enter Second Value : ";
    cin >> b_d;
    cout << fixed;           //It will only fix digits after decimal //
    cout << setprecision(4); //It will fix 4 digits after decimal //
    cout << "Enter Your Operator : ";
    cin >> opr_d;

    // Using If-else for operators in Denominator//
    if (opr_d == '+')
    {
        result_d = sum(a_d, b_d);
        cout << "Your Answer For Denominator : ";
    }
    else if (opr_d == '-')
    {
        result_d = sub(a_d, b_d);
        cout << "Your Answer For Denominator : ";
    }
    else if (opr_d == '*')
    {
        result_d = multiply(a_d, b_d);
        cout << "Your Answer For Denominator : ";
    }
    else if (opr_d == '/')
    {
        result_d = divide(a_d, b_d);
        cout << "Your Answer For Denominator : ";
    }

denominator_calculations:
    int de = result_d;      // Converting Double to Int
    string int_de_str = to_string(de);    // Converting Int to String
    int d_divisor = int_de_str.length() - 1;
    double du_divisor = result_d / pow(10, d_divisor);      //Reconverting Int to Double and Dividing it by 10 to power d_divisor
    cout << du_divisor << " x 10^" << d_divisor << endl;        // Final Output

    // Making loop for the program
    double result_m;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    char retry;
    cout << "Do you want to retry (y/n) : ";
    cin >> retry;

    if (retry == 'y')
    {
        cout << endl;
        cout << endl;
        goto start;
    }
    else if (retry == 'n')
    {
        cout << endl;
        cout << endl;
        cout << "Thank you! :)";
        cout << endl;
        cout << endl;
    }
    cout << endl;
}
