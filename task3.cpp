// number guessing game 
# include <iostream >
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a random number between 1 and 100.\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a valid number between 1 and 100.\n";
            continue;
        }

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You've guessed the number ("
                 << secretNumber << ") in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}
