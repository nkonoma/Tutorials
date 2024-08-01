//
//  output.cpp
//  Chapter 4 quiz #2
//
//  Created by Nic Konoma on 7/12/24.
//

#include <stdio.h>
#include <iostream>
#include "dee.h"

void output(float y_height, int time){
    if (y_height <= 0){
        std::cout << "At " << time << " seconds, the ball is on the ground\n";
    }
    else{
        std::cout << "At " << time << " seconds, the ball is at a height: " << y_height << " meters\n";
    }
}
