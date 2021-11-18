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

    cout << "For Numerator ---> " << endl;
//Numerator Initialization
    double a, b, c, d, result1, result2, result3, result4;
    char opr1, opr2, opr3, opr4;
    cout << "Enter the value of 1st Num :: ";
    cin >> a;
    cout << "Enter Your 1st Operator : ";
    cin >> opr1;
    cout << "Enter the value of 2nd Num :: ";
    cin >> b;
    cout << "Enter Your 2nd Operator : ";
    cin >> opr2;
    cout << "Enter the value of 3rd Num :: ";
    cin >> c;
    cout << "Enter Your 3rd Operator : ";
    cin >> opr3;
    cout << "Enter the value of 4th Num :: ";
    cin >> d;
    cout << fixed;           //It will only fix digits after decimal //
    cout << setprecision(4); //It will fix 4 digits after decimal //

    // For 1st operation-NUMERATOR
    if (opr1 == '+')
    {
        result1 = sum(a, b);
    }
    else if (opr1 == '-')
    {
        result1 = sub(a, b);
    }
    else if (opr1 == '*')
    {
        result1 = multiply(a, b);
    }
    else if (opr1 == '/')
    {
        result1 = divide(a, b);
    }

    // For 2nd operation-NUMERATOR
    if (opr2 == '+')
    {
        result2 = sum(result1, c);
    }
    else if (opr2 == '-')
    {
        result2 = sub(result1, c);
    }
    else if (opr2 == '*')
    {
        result2 = multiply(result1, c);
    }
    else if (opr2 == '/')
    {
        result2 = divide(result1, c);
    }

    // For 3rd Operation-NUMERATOR
    if (opr3 == '+')
    {
        result3 = sum(result2, d);
    }
    else if (opr2 == '-')
    {
        result3 = sub(result2, d);
    }
    else if (opr3 == '*')
    {
        result3 = multiply(result2, d);
    }
    else if (opr3 == '/')
    {
        result1 = divide(result2, d);
    }

// Numerator Calculations
    
    int x_n = result3;
    string x_a_n = to_string(x_n);
    int power_n = x_a_n.length() - 1;
    double decimal_answer_n = result3 / pow(10, power_n);
    cout << "Your Numerator ans is ::  ";
    cout << decimal_answer_n << " x 10^" << power_n << endl;

    cout << endl;
    cout << endl;

    cout << "For Denomenator ---> " << endl;
    
// Denomenator Initialization
    double a_d, b_d, c_d, d_d, result1_d, result2_d, result3_d, result4_d;
    char opr1_d, opr2_d, opr3_d, opr4_d;
    cout << "Enter the value of 1st Den :: ";
    cin >> a_d;
    cout << "Enter Your 1st Operator : ";
    cin >> opr1_d;
    cout << "Enter the value of 2nd Den :: ";
    cin >> b_d;
    cout << "Enter Your 2nd Operator : ";
    cin >> opr2_d;
    cout << "Enter the value of 3rd Den :: ";
    cin >> c_d;
    cout << "Enter Your 3rd Operator : ";
    cin >> opr3_d;
    cout << "Enter the value of 4th Den :: ";
    cin >> d_d;
    cout << fixed;           //It will only fix digits after decimal //
    cout << setprecision(4); //It will fix 4 digits after decimal //

    // For 1st operation-DENOMENATOR
    if (opr1_d == '+')
    {
        result1_d = sum(a_d, b_d);
    }
    else if (opr1_d == '-')
    {
        result1_d = sub(a_d, b_d);
    }
    else if (opr1_d == '*')
    {
        result1_d = multiply(a_d, b_d);
    }
    else if (opr1_d == '/')
    {
        result1_d = divide(a_d, b_d);
    }

    // For 2nd operation-DENOMENATOR
    if (opr2_d == '+')
    {
        result2_d = sum(result1_d, c_d);
    }
    else if (opr2_d == '-')
    {
        result2_d = sub(result1_d, c_d);
    }
    else if (opr2_d == '*')
    {
        result2_d = multiply(result1_d, c_d);
    }
    else if (opr2_d == '/')
    {
        result2_d = divide(result1_d, c_d);
    }

    // For 3rd Operation-DENOMENATOR
    if (opr3_d == '+')
    {
        result3_d = sum(result2_d, d_d);
    }
    else if (opr2_d == '-')
    {
        result3_d = sub(result2_d, d_d);
    }
    else if (opr3_d == '*')
    {
        result3_d = multiply(result2_d, d_d);
    }
    else if (opr3_d == '/')
    {
        result1_d = divide(result2_d, d_d);
    }


// Denomenator Calculations
    
    int x_d = result3_d;
    string x_a_d = to_string(x_d);
    int power_d = x_a_d.length() - 1;
    double decimal_answer_d = result3_d / pow(10, power_d);
    cout << "Your Denomenator ans is ::  ";
    cout << decimal_answer_d << " x 10^" << power_d << endl;

    double final_answer = decimal_answer_n / decimal_answer_d;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Your Final Answer is :: " << final_answer << endl;
}