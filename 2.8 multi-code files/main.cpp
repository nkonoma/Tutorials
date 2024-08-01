//
//  main.cpp
//  2.8 multi-code files
//
//  Created by Nic Konoma on 6/25/24.
//

#include <iostream>
// This program calls a function on a seperate file

int add(int x,int y); // forward declaration of function

int main() {
    std::cout << "Enter 2 numbers: ";
    int x{};
    int y{};
    std::cin >> x >> y;
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x,y) << '\n'; // function call for 'add'
    return 0;
}
