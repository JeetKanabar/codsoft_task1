#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main() {
    // Seed the random number generator with the current time 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int snum = std::rand() % 100 + 1;

    int g;
    int att = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;

    do {
        std::cout << "Guess The Number (between 1 and 100): ";
        std::cin >> g;

        // Increment the number of attempts
        att++;

        if (g < snum) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (g > snum) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << snum << " in " << att << " attempts!" << std::endl;
        }
    } while (g != snum);

    return 0;
}
