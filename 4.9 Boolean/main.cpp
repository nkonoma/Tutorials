//
//  main.cpp
//  4.9 Boolean
//
//  Created by Nic Konoma on 7/2/24.
//

#include <iostream>

bool isEqual(int x,int y)
{
    return x == y;
}

int main() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;
    
    std::cout << std::boolalpha; // prints bool as true or false
    
    std::cout << x << " and " << y << " are equal? ";
    std::cout << isEqual(x,y) << '\n'; // will return true or false
    
    return 0;
}
