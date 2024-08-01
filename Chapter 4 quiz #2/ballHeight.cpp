//
//  ballHeight.cpp
//  Chapter 4 quiz #2
//
//  Created by Nic Konoma on 7/12/24.
//

#include <stdio.h>
#include <iostream>
#include "dee.h"

void ballHeight(int tower_height,int time){
    double g{9.8}; // gravity m/s^2
    float fallen_dist{};
    float y_height{};
    
    fallen_dist = g * time*time/2.0;
    y_height = tower_height - fallen_dist;
    
    output(y_height, time);
}
