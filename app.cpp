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
  int age_in_min = age_in_hours * 60;
  int age_in_s = age_in_min * 60;

  cout << "Age In Days Is: " << age_in_days << " Days\n";
  cout << "Age In Hours Is: " << age_in_hours << " Hours\n";
  cout << "Age In min Is: " << age_in_min << " Min\n";
  cout << "Age In s Is: " << age_in_s << " s\n";

  return 0;
}