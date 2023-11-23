#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    const string allChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    string password;
    for (int i = 0; i < length; ++i) {
        password.push_back(allChars[rand() % allChars.length()]);
    }
    return password;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int choice;

    cout << "Choose an option:" << endl;
    cout << "1. Guess a number" << endl;
    cout << "2. Generate a password" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Guess a number from 1-100: ";
        cin >> guess;

        
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
        } else {
            cout << "Sorry, the correct number was: " << secretNumber << endl;
        }

    } else if (choice == 2) {
        int passwordLength;
        cout << "Enter the length of the password: ";
        cin >> passwordLength;

        string password = generatePassword(passwordLength);
        cout << "Generated Password: " << password << endl;

    } else {
        cout << "Invalid Please choose 1 or 2" << endl;
    }

    return 0;
}
