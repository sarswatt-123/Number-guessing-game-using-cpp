#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    do
    {
        std::cout << "Enter your guess (between 1 and 100): ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else if (guess > secretNumber)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
