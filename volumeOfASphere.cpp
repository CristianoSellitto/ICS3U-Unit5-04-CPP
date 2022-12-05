// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in December 2022
// A program that calculates a cylinder's volume

#include <cmath>
#include <iostream>
#include <string>

float VolumeOfASphere(int radius, int height) {
    // Calculates a cylinder's volume

    float volume;

    if (radius < 0 || height < 0) {
        return -1;
    } else {
        volume = M_PI * pow(radius, 2) * height;
        return volume;
    }
}

int main() {
    // Gets input and calls to calculate the volume of the cylinder

    int radiusInteger;
    int heightInteger;
    float cylinderVolume;
    std::string radiusText;
    std::string heightText;

    std::cout << "This program calculates a cylinder's volume.";
    std::cout << std::endl;
    std::cout << "V = πr²h" << std::endl;
    std::cout << std::endl;
    try {
        std::cout << "Enter the cylinder's radius (mm): ";
        std::cin >> radiusText;
        radiusInteger = stoi(radiusText);
        std::cout << "Enter the cylinder's height (mm): ";
        std::cin >> heightText;
        heightInteger = stoi(heightText);
        cylinderVolume = VolumeOfASphere(radiusInteger, heightInteger);
        std::cout << std::endl;
        std::cout << "This cylinder's volume is " << cylinderVolume << " mm³";
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "You did not enter a valid integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
