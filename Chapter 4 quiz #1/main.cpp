//
//  main.cpp
//  Chapter 4 quiz #1
//
//  Created by Nic Konoma on 7/10/24.
//

#include <iostream>
#include "Header.h"

int main(int argc, const char * argv[]) {
    double x{inputFunc1()};        // function call for user input
    double y{inputFunc2()};
    char sign{inputFunc3()};
    
    calcOutput(x,y,sign);

    return 0;
}
