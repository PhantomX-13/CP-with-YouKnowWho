#include<iostream>
using namespace std;
int main(){
for (int week = 1; week <= 4; week++) {
    cout << "Week = " << week << '\n';
    for (int day = 1; day <= 7; day++) {
        if (day >= 2 && day <= 6) continue; // This will skip to the next iteration of the inner loop when 'day' is between 2 and 6
        cout << "   Day = " << day << '\n';
    }
  }
}