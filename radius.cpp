// Copyright (c) 2022 Ethan Prieur All rights reserved
//
// Created by: Ethan Prieur
// Created on: May 2022
// This program calculates radius

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
