// CSC-222-Interactive-IO-and-Mathematical-Expressions-Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double rate, principal, t;

    cout << "Enter the principal in the savings account (in $0.00 format): ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the number of times interest is compounded in a year: ";
    cin >> t;

    double rate_decimal = rate / 100;
    double amount_in_savings = principal * pow((1 + (rate_decimal / t)), t);
    double interest = amount_in_savings - principal;

    cout << setprecision(2) << fixed;
    cout << setw(20) << left << "Interest Rate:" << setw(12) << right << rate << "%" << endl;
    cout << setw(20) << left << "Times Compounded:" << setw(12) << right << setprecision(0) << fixed << t << endl;
    cout << setprecision(2) << fixed;
    cout << setw(20) << left << "Principal:" << "$ " << setw(10) << right << principal << endl;
    cout << setw(20) << left << "Interest:" << "$ " << setw(10) << right << interest << endl;
    cout << setw(20) << left << "Amount in Savings:" << "$ " << setw(10) << right << amount_in_savings << endl;
    return 0;
}

