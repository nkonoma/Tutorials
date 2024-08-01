//
//  main.cpp
//  1.5question2
//
//  Created by Nic Konoma on 6/24/24.
//

#include <iostream>

// asks the user to enter three numbers and then displays those three numbers
int main()
{
    std::cout << "Enter three numbers: ";
    int x{};
    int y{};
    int z{};
    
    std::cin >> x >> y >> z;
    
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0;
}

