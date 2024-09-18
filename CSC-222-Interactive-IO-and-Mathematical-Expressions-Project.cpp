//This program takes a number of cookies inputted by the user and uses that number
//to adjust the number of cups of each ingredient needed to produce that number of cookies
//in the recipe

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Initialize variables
    double cups_sugar_original_recipe = 1.5, cups_butter_original_recipe = 1,
        cups_flour_original_recipe = 2.75, cookies_in_recipe = 48, cookies_requested;
    
    //Input number of cookies requested
    cout << "Enter the number of cookies you would like to make: ";
    cin >> cookies_requested;

    //Perform calculations and receive adjusted amounts of each ingredient in recipe
    double recipe_multiplier = cookies_requested / cookies_in_recipe;
    double cups_sugar_new_recipe = cups_sugar_original_recipe * recipe_multiplier;
    double cups_butter_new_recipe = cups_butter_original_recipe * recipe_multiplier;
    double cups_flour_new_recipe = cups_flour_original_recipe * recipe_multiplier;

    //Display new amounts of each ingredient needed
    cout << setprecision(2) << fixed;
    cout << "Cups of sugar needed: " << cups_sugar_new_recipe << endl;
    cout << "Cups of butter needed: " << cups_butter_new_recipe << endl;
    cout << "Cups of flour needed: " << cups_flour_new_recipe << endl;
    return 0;
}

