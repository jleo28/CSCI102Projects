//=============================================================================
// Name: Joseph Leo
// E-mail: jaleo@usc.edu
// Description: provide a 1-2 sentence description of your program
// My program mimics a person's order at Starbucks. It will take into factor whether 
// the person would like to order a kind of coffee or food.  
// ------------------------ Test case Inputs ----------------------------------
//  <
//  Test 1 input: 
//  Coffee, Cappuccino, Small
//  
//  Test 1 output: 
//  Thank you for your order!
//  Your total is $5.00.
//  Your Small Cappuccino will be with you shortly!"
// 
//  Test 2 input:
//  Coffee, Latte, X-Large, y
//  
//  Test 2 output:
//  Thank you for your order!
//  Your total is $7.90.
//  Your X-Large Latte with extra syrup will be with you shortly!
//
//  Test 3 input:
//  Coffee, Macchiato, Large, n
//
//  Test 3 output:
//  Thank you for your order!
//  Your total is $7.50.
//  Your Large Macchiato will be with you shortly!
//
//  Test 4 input:
//  Food, Pastry, Croissant, Butter
//
//  Test 4 output:
//  Thank you for your order!
//  Your total is $7.25.
//  Your Butter Croissant will be with you shortly!
//
//  Test 5 input: 
//  Food, Sandwich, Chicken, y
//
//  Test 5 output:
//  Thank you for your order!
//  Your total is $8.05.
//  Your Chicken Sandwich with extra ketchup will be with you shortly!
//
//  Test 6 input:
//  Food, Sandwich, BLT, n
//  
//  Test 6 output:
//  Thank you for your order!
//  Your total is $8.00.
//  Your BLT Sandwich will be with you shortly!
//=============================================================================
// ------------ Add #includes and other statements here ----------
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;
// ------------ Add your main() function below ----------
int main ()
{
 string Order;
 string Coffee_type;
 string Drink_size;
 char Syrup;
 bool Syrup_bool = false;
 string Food_type;
 string Pastry_type;
 string Croissant_type;
 string Danish_type;
 string Sandwich_type;
 char Ketchup;
 bool Ketchup_bool = false;
 double Price = 0.00;
 //mention specific order
 cout << "Hi! Welcome to Blue Porter Coffee. Would you like to order Coffee or Food?" << endl;
 cin >> Order;
 if (Order == "Coffee")
 {
  cout << "What kind of coffee would you like? We have Cappuccino, Americano, Latte, and Macchiato on our menu." << endl;
  cin >> Coffee_type;
  if (Coffee_type == "Cappuccino")
  {
    Price += 5.00;
  }
  else if (Coffee_type == "Americano")
  {
    Price += 5.25;
  }
  else if (Coffee_type == "Latte")
  {
    Price += 6.00;
  }
  else if (Coffee_type == "Macchiato")
  {
    Price += 6.25;
  }
  cout << "What size drink would you like? We have Small, Medium, Large, and X-Large sizes." << endl;
  cin >> Drink_size; 
  if (Drink_size == "Small")
  {
    Price += 0.00;
  }
  else if (Drink_size == "Medium")
  {
    Price += 0.75;
  } 
  else if (Drink_size == "Large")
  {
    Price += 1.25;
  }
  if (Drink_size == "X-Large")
  {
    Price += 1.75;
  }
  if (Drink_size == "Large" || Drink_size == "X-Large")
  {
    cout << "Would you like additional caramel syrup? (y/n)" << endl;
    cin >> Syrup;
    if (Syrup == 'y')
    {
      Syrup_bool = true;
      Price += 0.15;
    }
    else if (Syrup == 'n')
    {
      Price += 0.00;
    }
  }
  if (Syrup_bool == true)
  {
    cout << "Thank you for your order!" << endl << "Your total is $" << fixed << setprecision(2) << Price << "." << endl << "Your " << Drink_size << 
    " " << Coffee_type << " with extra syrup will be with you shortly!" << endl; 
  }
  else 
  {
    cout << "Thank you for your order!" << endl << "Your total is $" << fixed << setprecision(2) << Price << "." << endl << "Your " << Drink_size << 
    " " << Coffee_type << " will be with you shortly!" << endl; 
  }
 }
 if (Order == "Food") 
 {
  cout << "Very well! What kind of food would you like to order? (Pastry or Sandwich)" << endl;
  cin >> Food_type;
  if (Food_type == "Pastry")
  {
    cout << "What kind of Pastry would you like? (Croissant or Danish)" << endl;
    cin >> Pastry_type;
    if (Pastry_type == "Croissant")
    {
      cout << "What kind of Croissant would you like? (Almond, Butter, or Plain)" << endl;
      cin >> Croissant_type;
      if (Croissant_type == "Almond" || Croissant_type == "Butter")
      {
        Price += 7.25;
      }
      else if (Croissant_type == "Plain")
      {
        Price += 7.00;
      }
    }
    else if (Pastry_type == "Danish")
    {
      cout << "What kind of Danish would you like? (Blueberry or Raspberry)" << endl;
      cin >> Danish_type;
      if (Danish_type == "Blueberry")
      {
        Price += 6.50;
      }
      else if (Danish_type == "Raspberry")
      {
        Price += 6.75;
      }
    }
  }
  if (Food_type == "Sandwich")
  {
    cout << "What kind of Sandwich would you like? (BLT, Chicken, or Fruits)?" << endl;
    cin >> Sandwich_type;
    if (Sandwich_type == "BLT" || Sandwich_type == "Chicken")
    {
      Price += 8.00;
      cout << "Would you like ketchup (y/n)?" << endl;
      cin >> Ketchup;
      if (Ketchup == 'y')
      {
        Price += 0.05;
        Ketchup_bool = true;
      }
      else
      {
        Price += 0.00;
      }
    }
    if (Sandwich_type == "Fruits")
    {
      Price += 7.25;
    }
  }
  if (Food_type == "Pastry")
  {
    if (Pastry_type == "Croissant")
    {
      cout << "Thank you for your order!" << endl << "Your total is $" << fixed << setprecision(2) << Price << "." << endl << 
      "Your " << Croissant_type << " Croissant will be with you shortly!" << endl;
    }
    else if (Pastry_type == "Danish")
    {
      cout << "Thank you for your order!" << endl << "Your total is $" << fixed << setprecision(2) << Price << "." << endl << 
      "Your " << Danish_type << " Danish will be with you shortly!" << endl;
    }
  }
  else if (Food_type == "Sandwich")
  {
    if (Ketchup_bool == true)
    {
      cout << "Thank you for your order!" << endl << "Your total is $" << fixed << setprecision(2) << Price << "." << endl << 
      "Your " << Sandwich_type << " Sandwich with extra ketchup will be with you shortly!" << endl;
    }
    else if (Ketchup_bool == false)
    {
      cout << "Thank you for your order!" << endl << "Your total is $" << fixed << setprecision(2) << Price << "." << endl << 
      "Your " << Sandwich_type << " Sandwich will be with you shortly!" << endl;
    }
  }
 }
  return 0;
}