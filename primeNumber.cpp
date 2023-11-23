#include <iostream>

bool isPrime(int number) {
   
    if (number <= 1) {
        return false;
    }

    
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; 
        }
    }

    return true;
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << num << " is a prime number.\n";
    } else {
        std::cout << num << " is not a prime number.\n";
    }

    return 0;
}
