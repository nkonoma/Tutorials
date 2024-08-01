//
//  output.cpp
//  Chapter 4 quiz #1
//
//  Created by Nic Konoma on 7/10/24.
//

#include <stdio.h>
#include <iostream>

void calcOutput(double x, double y, char sign){
    if (sign == '+'){
        std::cout << x << " " << sign << " " << y << " is " << x+y << '\n';
    }
    else if (sign == '-'){
        std::cout << x << " " << sign << " " << y << " is " << x-y << '\n';
    }
    else if (sign == '*'){
        std::cout << x << " " << sign << " " << y << " is " << x*y << '\n';
    }
    else if (sign == '/'){
        std::cout << x << " " << sign << " " << y << " is " << x/y << '\n';
    }
    else{
        
    }
}
