//
//  main.cpp
//  2.4
//
//  Created by Nic Konoma on 6/25/24.
//

#include <iostream>

int doubleNumber(){
    std::cout << "Enter a number: ";
    int input{};
    std::cin >> input;
    
    return input;
}

int main() {
    int x{doubleNumber()};
    std::cout << "Double your number is: " << x*2 << '\n';
    
    return 0;
}
