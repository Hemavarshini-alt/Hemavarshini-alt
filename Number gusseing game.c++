#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1; 
    int guess = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I've picked a number between 1 and 100. Try to guess it!" << std::endl;

    while (guess != number) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < number) {
            std::cout << "Too low!" << std::endl;
        } else if (guess > number) {
            std::cout << "Too high!" << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number!" << std::endl;
        }
    }

    return 0;
}
