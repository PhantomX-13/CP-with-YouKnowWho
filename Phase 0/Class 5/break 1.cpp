#include<iostream>
using namespace std;
int main(){
    for (int week = 1; week <= 4; week++) {
    cout << "Week = " << week << '\n';
    for (int day = 1; day <= 7; day++) {
        cout << "   Day = " << day << '\n';
        if (day == 3) {
            break; // This will exit the inner loop when 'day' is 3
        }
    }
  }
}