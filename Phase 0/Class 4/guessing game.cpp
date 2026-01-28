#include<iostream>
using namespace std;

int main() {
    int magic_number = 5; // The number to be guessed
    int guess = 0; // Variable to store the user's guess, initialized to 0 to avoid garbage value
    int guess_count = 0; // Counter for the number of guesses made
    int guess_limit = 2; // Maximum number of allowed guesses

    cout << "I have a number in mind. Can you guess it?\n";
    cout << "You have " << guess_limit << " guesses.\n";
    cout << "Let's begin!\n";

    bool has_guess_limit_crossed = false; // Flag to track if the guess limit is exceeded

    // The loop continues until the correct number is guessed or the guess limit is reached
    while (magic_number != guess && !has_guess_limit_crossed) {
        if (guess_count < guess_limit) {
            cout << "What's your guess: ";
            cin >> guess; // Taking user input for the guess
            guess_count++; // Incrementing the guess counter
        } else {
            has_guess_limit_crossed = true; // Setting the flag when the guess limit is reached
        }
    }

    // Checking if the user ran out of guesses
    if (has_guess_limit_crossed) {
        cout << "You are out of guesses! Sad :((.\n";
    } else {
        cout << "Congrats! You guessed the number.\n";
    }

    return 0;
}