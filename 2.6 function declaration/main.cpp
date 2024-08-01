//
//  main.cpp
//  2.6 function declaration
//
//  Created by Nic Konoma on 6/25/24.
//

#include <iostream>

int add(int x, int y);      // function declaration includes return type, name, parameters, and semicolon. No function body.
                            // this is a forward declaration
// int add(int, int) - also valid

int main() {
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y){
    return x + y;
}
