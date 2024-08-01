//
//  main.cpp
//  2.10 Intro Preprocessor
//
//  Created by Nic Konoma on 6/25/24.
//

#include <iostream>
// The shows the convenient way to select a section of code that you don't want to compile without commenting every line out
// This is especially usefull for comment block because they can't be nested

int main() {
    std::cout << "Joe\n";
    
#if 0 // Don't compile anything here
    std::cout << "Bob\n";
    /* some
     * multi-line
     * comment here
     */
    std::cout << "Steve\n";
#endif // until this point
    
    return 0;
}
