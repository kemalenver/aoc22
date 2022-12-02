//
//  Created by Kemal Enver on 2/12/2022.
//

#include "day1.hpp"
#include "day2.hpp"

#include <iostream>
#include <string>

void day1() {
    int p1Res = Day1::p1();
    int p2Res = Day1::p2();
    
    std::cout << "Day 1 Part 1: " << p1Res << '\n';
    std::cout << "Day 1 Part 2: " << p2Res << '\n';
}

void day2() {
    int p1Res = Day2::p1();
    int p2Res = Day2::p2();
    
    std::cout << "Day 2 Part 1: " << p1Res << '\n';
    std::cout << "Day 2 Part 2: " << p2Res << '\n';
}

int main(int argc, char * argv[]) {
    day1();
    std::cout << '\n';
    day2();
    
    return 1;
}
