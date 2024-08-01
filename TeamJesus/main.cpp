//
//  main.cpp
//  TeamJesus
//
//  Created by Nic Konoma on 6/24/24.
//

#include <iostream>

// this function accepts user input
int getUserinput(){
    std::cout << "Please enter a positive or negative integer: ";
    int x{};
    std::cin >> x;      // stores value in x
    if (x != 0){        // conditional statement
        return x;
    }
    else {              // if the user inputs a 0, the current function is called again to restart
        std::cout << "Error! Please enter a non-zero integer!\n";
        getUserinput();
        return x;
    }
}
// this function determines the positive or negative number
void calculateSign(int x){
    if (x / 1 > 0 & x / -1 < 0) {
        std::cout << "Your number is a positive number.\n";
    }
    else{
        std::cout << "Your number is a negative number.\n";
    }
}
// this function determines if number is even or odd
void evenodd(int x){
    if (x % 2 == 0) {
        std::cout << "The number " << x << " is an even number.\n";
    }
    else if (x % 2 == 1 || x % 2 == -1){
        std::cout << "The number " << x << " is an odd number.\n";
    }
}

int main(){
    int x{getUserinput()};      // this calls function to retrieve the user input of a number
    calculateSign(x);           // this calls the function to calculate positive or negative number
    evenodd(x);                 // this calls the function to calcualte even or odd number
        
    return 0;
}
