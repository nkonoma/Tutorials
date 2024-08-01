//
//  inputFunc3.cpp
//  Chapter 4 quiz #1
//
//  Created by Nic Konoma on 7/10/24.
//

#include <stdio.h>
#include <iostream>

char inputFunc3(){
    std::cout << "Enter +, -, *, or /: ";
    char argument{};
    std::cin >> argument;
    
    if (argument == '+' || argument == '-' || argument == '*' || argument == '/') {
        return argument;
    }
    else {
        return 0;
    }
}
