#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;

    cout << "Welcome to the guessing game" << endl;
    cout << "Try to guess the number between 1 to 100" << endl;

    do
    {
        cout << "Enter your guessed number: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Congratulations...the number is " << secretNumber << endl;
            cout << "You took " << attempts << " attempts to guess." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}

