// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program calculates the area and the perimeter of the circle

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If the circle's radius is 15 mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "mm^2" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "mm" << std::endl;
}
