#include<iostream>
using namespace std;

// Function with no argument and no return value
// This type of function doesn't accept any argument/parameter and doesn't return any value either
void say_hello() { // void means no return value
    cout << "Hello World!\n";
}

// Function with no argument but return value
// This type of function doesn't accept any argument/parameter but returns a value
int get_number() { // int means it returns an integer value
    return 42;
}

// Function with argument but no return value
// This type of function accepts some arguments/parameters but doesn't return any value
void print_number(int number) { // void means no return value
    cout << number << '\n';
}

// Function with argument and return value
// This type of function accepts some arguments/parameters and returns a value
int get_sum(int a, int b) { // int means it returns an integer value
    return a + b;
}

int main() {
    say_hello();
    cout << get_number() << '\n';
    print_number(10);
    cout << get_sum(10, 20) << '\n';
    return 0;
}