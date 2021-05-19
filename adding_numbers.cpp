// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program lets the user add numbers

#include <iostream>
#include <random>
#include <string>

int main() {
    // This program adds numbers however many times the user wants to
    std::string loopsAsString;
    std::string numberAsString;
    int loopsAsInteger;
    int loopCounter = 0;
    int total = 0;
    int numberAsInteger;

    // Input
    std::cout << "Enter how many times to add: ";
    std::cin >> loopsAsString;

    // Process and Output
    try {
        loopsAsInteger = std::stoi(loopsAsString);
        if (loopsAsInteger > 0) {
            while (loopsAsInteger > loopCounter) {
                std::cout << "Enter a number to add: ";
                std::cin >> numberAsString;
                try {
                    numberAsInteger = std::stoi(numberAsString);
                    loopCounter += 1;
                    if (numberAsInteger < 0) {
                        continue;
                    }
                    total += numberAsInteger;
                } catch (std::invalid_argument) {
                    std::cout << "Invalid integer" << std::endl;
                    continue;
                }
            }
            std::cout << "\nThe sum of the numbers is "
            << total << std::endl;
        } else {
            std::cout << "Invalid number of times" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << numberAsString << "is not an integer!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
