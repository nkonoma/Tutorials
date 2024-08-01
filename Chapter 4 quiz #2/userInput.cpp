//
//  userInput.cpp
//  Chapter 4 quiz #2
//
//  Created by Nic Konoma on 7/12/24.
//

#include <stdio.h>
#include <iostream>

int userInput(){
    std::cout << "Enter the height of the tower in meters: ";
    int tower_height{};
    std::cin >> tower_height;
    
    return tower_height;
}
