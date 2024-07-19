//=============================================================================
// Name: Joseph Leo
// E-mail: jaleo@usc.edu
// Description: provide a 1-2 sentence description of your program
//  This program is a modification of my Portfolio 1, wherein the user is able 
//  essentially input an unlimited amount of orders that will be reflected in 
// total price and number of drinks ordered. 
// ------------------------ Test case Inputs ----------------------------------
//  Test 1 input: 
//  Yes, Latte, Large, Yes, No
//   <what input should we type in to test your program>
//  Test 1 output: 
//  Very well. Thank you for your time!
//  Your total is $7.25 for 1 drink(s).
//  Thank you and have a nice day.
//   <what output should we expect for that input>
// 
//  Test 2 input:
//  Yes, Macchiato, X-Large, Yes, Yes, Cappuccino, Medium, Yes, Yes, Americano, Medium, No
//   <what input should we type in to test your program>
//  Test 2 output:
//  Your total is $19.75 for 3 drink(s).
//  Thank you and have a nice day.
//   <what output should we expect for that input>
//
//=============================================================================

// ------------ Add #includes and other statements here ----------
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
 string order;
 int coffeeCount = 0;
 string type;
 string size;
 char syrup;
 bool syrupBool = false;
 double price = 0.00;
 string anythingElse = "Yes";
 cout << "Hi! Welcome to Blue Porter Coffee." << endl;
 while (anythingElse == "Yes"){
  cout << "Would you like to order a Coffee drink? (Yes/No)" << endl;
  cin >> order;
  if (order == "Yes"){
    coffeeCount++;
    cout << "What kind of coffee would you like? We have Cappuccino, Americano, Latte, and Macchiato on our menu." << endl;
    cin >> type;
    if (type == "Cappuccino"){
      price += 5.00;
    }
    else if (type == "Americano"){
      price += 5.25;
    }
    else if (type == "Latte"){
      price += 6.00;
    }
    else if (type == "Macchiato"){
      price += 6.25;
    }
    cout << "What size drink would you like? We have Small, Medium, Large, and X-Large sizes." << endl;
    cin >> size; 
    if (size == "Small"){
      price += 0.00;
    }
    else if (size == "Medium"){
      price += 0.75;
    } 
    else if (size == "Large"){
      price += 1.25;
    }
    else if (size == "X-Large"){
      price += 1.75;
    }
  cout << "Your " << size << " " << type << " will be with you shortly." << endl;
  cout << "Is there anything else I can get you today? (Yes/No)" << endl;
  cin >> anythingElse;
    if (anythingElse == "No"){
    break;
    }
  }
  else if (order == "No" || coffeeCount == 0){
    anythingElse = "No";
    cout << "Very well. Thank you for your time!" << endl;
  }
}
if (coffeeCount > 0){
  cout << "Your total is $" << setprecision(2) << fixed << price << " for " << coffeeCount << " drink(s)." << endl << "Thank you and have a nice day." << endl;
}
return 0;
}
 
