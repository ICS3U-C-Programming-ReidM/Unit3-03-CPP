// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program checks if the user guesses the random number correctly

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 9
    int random_number = std::rand() % 9 + 1;

    int user_guess;

    // Ask the user for their guess
    std::cout << "Guess a number between 1 and 9: ";
    std::cin >> user_guess;

    // Check if the guess is correct
    if (user_guess == random_number) {
        std::cout << "You guessed the correct number!" << std::endl;
    } else {
        std::cout << "Wrong! The correct number was "
        << random_number << "." << std::endl;
    }

    return 0;
}
