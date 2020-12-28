// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program can convert degrees celsius to fahrenheit

#include <iostream>
#include <string>

void Fahrenheit()  {
    // this function can convert degrees celsius to fahrenheit

    std::string temperatureString;
    int temperatureInteger;
    float fahrenheit;

    std::cout << "This program can convert degrees celsius to fahrenheit."
              << "\n" << std::endl;

    // input
    std::cout << "Enter a temperature(℃): " << std::endl;
    std::cin >> temperatureString;
    std::cout << "\n" << std::endl;

    try {
        temperatureInteger = std::stoi(temperatureString.c_str());

        // process
        fahrenheit = (9.0/5.0)*temperatureInteger + 32;

        // output
        std::cout << temperatureInteger << "°C is equal to " << fahrenheit
                  << "°F" << std::endl;
        }
    catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}


main() {
    // this function just calls other functions

    // call functions
    Fahrenheit();
}
