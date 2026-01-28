#include<iostream>
using namespace std;
int main(){
for (int week = 1; week <= 4; week++) {
    if (week == 2 || week == 3) continue; // This will skip to the next iteration of the outer loop when 'week' is 2 or 3
    cout << "Week = " << week << '\n';
    for (int day = 1; day <= 7; day++) {
        cout << "   Day = " << day << '\n';
    }
}
}