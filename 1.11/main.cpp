//
//  main.cpp
//  1.11
//
//  Created by Nic Konoma on 6/25/24.
//

#include <iostream>

// this program will accept the user input of a number and take the number and double it
int main() {
    std::cout << "Enter an integer: ";      // tells user to enter integer
    
    int x{};                                // intialize variable x
    std::cin >> x;                          // assigns user input to variable x
    
    //int y {x*2};                            // doubles the user input x and assigns it to y
    //std::cout << "Double that number is: " << y << '\n';    // outputs result to the user
    
    std::cout << "Double " << x << " is: " << x * 2 << '\n';
    std::cout << "Triple " << x << " is: " << x * 3 << '\n';
 
    return 0;
}
