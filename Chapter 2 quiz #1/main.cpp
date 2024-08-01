//
//  main.cpp
//  Chapter 2 quiz #1
//
//  Created by Nic Konoma on 6/26/24.
//

#include <iostream>

// This function takes the input of user and returns it to main
int readnumber(){
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    return x;
}
// This function add the two user inputs and outputs the results
void writeanswer(int x, int y){
    std::cout << "Your two digits added together is: " << x + y << '\n';
}

int main() {
    int x = readnumber();           // First call of the function that accepts user input
    int y = readnumber();           // Second call that accepts user input
    
    writeanswer(x,y);               // Calls function that outputs results
    
    return 0;
}
