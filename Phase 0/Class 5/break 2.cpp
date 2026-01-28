#include<iostream>
using namespace std;
int main(){
  for (int week = 1; week <= 4; week++) {
    if (week == 3) {
        // This will exit the outer loop when 'week' is 3
        // So nothing will be printed after 'week' is 3
        break;
    }
    cout << "Week = " << week << '\n';
    for (int day = 1; day <= 7; day++) {
        cout << "   Day = " << day << '\n';
    }
  }
}