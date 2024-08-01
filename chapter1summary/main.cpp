//
//  main.cpp
//  chapter1summary
//
//  Created by Nic Konoma on 6/25/24.
//

#include <iostream>

// this program accepts two user inputs and adds and subtracts the user inputs before displaying results back to the user
int main() {
    int x{};
    int y{};
    
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;
    
    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";
    
    return 0;
}
