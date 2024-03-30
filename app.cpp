/*
  lern C++
  Calculate Your Age Application
  by khabzox
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "|====================================|\n";
  cout << "|== Calculate Your Age Application ==|\n";
  cout << "|==            by Khabzox          ==|\n";
  cout << "|====================================|\n";
  cout << "Enter Your Age: ";

  int age;
  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;

  cout << "Age In Days Is: " << age_in_days << " Days\n";
  cout << "Age In Hours Is: " << age_in_hours << " Hours\n";

  return 0;
}