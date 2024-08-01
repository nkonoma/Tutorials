//
//  main.cpp
//  4.12 Type conversion
//
//  Created by Nic Konoma on 7/5/24.
//

#include <iostream>

/*
int userInput(){
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;
    
    return ch;
}
*/
char userInput(){
    std::cout << "Enter a single character: ";
    char x{};
    std::cin >> x;          // stores user input of character as an char value
    
    return x;               // returns the value to main
}
// implicit type conversion here.
void print(int ch,char x){
    std::cout << "You entered \'" << x << "\', which has ASCII code " << ch << "." << '\n';
}
int main() {
    //int x = {userInput()};
    //std::cout << "You entered \'" << static_cast<char>(x) << "\', which has ASCII code " << x << "." << '\n';
    char ch{userInput()};
    print(ch,ch);
    
    return 0;
}
