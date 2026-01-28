#include<iostream>
using namespace std;

int main() {
  int age_in_days; 
  cin >> age_in_days;
  int years = age_in_days / 365;
  cout << years << " years\n";
  age_in_days = age_in_days % 365;

  int months = age_in_days / 30;
  cout << months << " months\n";

  age_in_days = age_in_days % 30;
  cout << age_in_days << " days\n";
  return 0;
}