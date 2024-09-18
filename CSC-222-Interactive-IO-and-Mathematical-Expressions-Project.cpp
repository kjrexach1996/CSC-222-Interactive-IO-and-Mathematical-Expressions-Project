// CSC-222-Interactive-IO-and-Mathematical-Expressions-Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cups_sugar_original_recipe = 1.5, cups_butter_original_recipe = 1,
        cups_flour_original_recipe = 2.75, cookies_in_recipe = 48, cookies_requested;
    
    cout << "Enter the number of cookies you would like to make: ";
    cin >> cookies_requested;

    double recipe_multiplier = cookies_requested / cookies_in_recipe;
    double cups_sugar_new_recipe = cups_sugar_original_recipe * recipe_multiplier;
    double cups_butter_new_recipe = cups_butter_original_recipe * recipe_multiplier;
    double cups_flour_new_recipe = cups_flour_original_recipe * recipe_multiplier;

    cout << setprecision(2) << fixed;
    cout << "Cups of sugar needed: " << cups_sugar_new_recipe << endl;
    cout << "Cups of butter needed: " << cups_butter_new_recipe << endl;
    cout << "Cups of flour needed: " << cups_flour_new_recipe << endl;
    return 0;
}

