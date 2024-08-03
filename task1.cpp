#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int guess;

    cout << "Guess a number between 1 and 100: ";
    cin>> guess ;
    while (guess) {
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (guess < randomNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }
        cout << "Guess again: ";
    }

    return 0;
}