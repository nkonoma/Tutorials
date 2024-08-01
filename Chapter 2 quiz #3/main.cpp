//
//  main.cpp
//  Chapter 2 quiz #3
//
//  Created by Nic Konoma on 6/26/24.
//

#include <iostream>
#include "io.hpp"

int main() {
    int x {readnumber()};           // First call of the function that accepts user input
    int y {readnumber()};           // Second call that accepts user input
    
    writeanswer(x,y);               // Calls function that outputs results
    
    return 0;
}
