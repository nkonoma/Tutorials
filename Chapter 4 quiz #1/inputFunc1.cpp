//
//  inputFunc1.cpp
//  Chapter 4 quiz #1
//
//  Created by Nic Konoma on 7/10/24.
//

#include <stdio.h>
#include <iostream>

double inputFunc1(){
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    
    return x;
}
