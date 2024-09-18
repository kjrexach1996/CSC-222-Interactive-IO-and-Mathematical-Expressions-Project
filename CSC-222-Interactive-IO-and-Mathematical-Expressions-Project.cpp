//This program takes information by the user--principal, an interest rate, and a number
//of times the interest compounds--to calculate the total amount in a savings account 
//and the amount of accumulated interest.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //Initialize variables
    double rate, principal, t;

    //Take user input
    cout << "Enter the principal in the savings account (in $0.00 format): ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the number of times interest is compounded in a year: ";
    cin >> t;

    //Calculate amount in savings account and accumulated interest
    double rate_decimal = rate / 100;
    double amount_in_savings = principal * pow((1 + (rate_decimal / t)), t);
    double interest = amount_in_savings - principal;

    //Display all results in an organized list
    cout << setprecision(2) << fixed;
    cout << setw(20) << left << "Interest Rate:" << setw(12) << right << rate << "%" << endl;
    cout << setw(20) << left << "Times Compounded:" << setw(12) << right << setprecision(0) << fixed << t << endl;
    cout << setprecision(2) << fixed;
    cout << setw(20) << left << "Principal:" << "$ " << setw(10) << right << principal << endl;
    cout << setw(20) << left << "Interest:" << "$ " << setw(10) << right << interest << endl;
    cout << setw(20) << left << "Amount in Savings:" << "$ " << setw(10) << right << amount_in_savings << endl;
    return 0;
}

