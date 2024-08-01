//
//  main.cpp
//  Chapter 4 quiz #2
//
//  Created by Nic Konoma on 7/12/24.
//

#include <iostream>
#include "dee.h"

int main(int argc, const char * argv[]) {
    int tower_height{ userInput() };            // User input function of the height of the tower
    
    ballHeight(tower_height,0);
    ballHeight(tower_height,1);
    ballHeight(tower_height,2);
    ballHeight(tower_height,3);
    ballHeight(tower_height,4);
    ballHeight(tower_height,5);
    
    return 0;
}
