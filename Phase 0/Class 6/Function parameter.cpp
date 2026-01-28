#include <iostream>
using namespace std;

void hey(string name, int amount) {
    cout << "Hey "<< name << "!";
    cout<< "You have "<< amount << "Taka\n";
}

int main() 
{
    hey("Pranjoy", -50);
    hey("Tanzim",40);
    return 0;
}