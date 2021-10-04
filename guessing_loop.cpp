// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This lets user guess a number

#include <iostream>
#include <random>
#include <string>


int main() {
    // This lets user guess a number
    int random;
    int guessNumber;
    std::string guessNumberString;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 9);  // [1,9]

    random = idist(rgen);

    while (true) {
    std::cout << "Enter a number between 1-9 : ";
    std::cin >> guessNumberString;
        try {
            guessNumber = std::stoi(guessNumberString);
            if (guessNumber == random) {
                std::cout << "You guessed correctly!" <<std::endl;
                break;
            } else if (guessNumber < random) {
                std::cout << "You guessed too low" <<std::endl;
            } else {
                std::cout << "You guessed too high" <<std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "Invalid input" <<std::endl;
        }
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
