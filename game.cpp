#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  std::srand(static_cast<unsigned int>(std::time(0)));
  int secret = std::rand() % 100 + 1;
  int guess = 0;
  int attempts = 0;

  std::cout << "=======================================\n";
  std::cout << "   Welcome to the Number Guessing Game!  \n";
  std::cout << "=======================================\n";
  std::cout << "I have selected a number between 1 and 100.\n";
  std::cout << "Can you guess what it is?\n\n";

  while (guess != secret) {
    std::cout << "Enter your guess: ";
    if (!(std::cin >> guess)) {
      std::cout << "Invalid input! Please enter a number.\n";
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      continue;
    }

    attempts++;

    if (guess < secret) {
      std::cout << "Too low! Try a higher number.\n";
    } else if (guess > secret) {
      std::cout << "Too high! Try a lower number.\n";
    } else {
      std::cout << "\nCongratulations! You found the secret number " << secret
                << "!\n";
      std::cout << "It took you " << attempts << " attempts.\n";
      std::cout << "Thanks for playing!\n";
    }
  }

  return 0;
}
