//
//  Created by Kemal Enver on 2/12/2022.
//

#include "day2.hpp"

#include <algorithm>
#include <fstream>
#include <string>
#include <vector>

const std::string inputLoc = "/Users/kemal.enver/Documents/Work/aoc22/aoc22/inputs/2-input.txt";
//const std::string inputLoc = "/Users/kemal.enver/Documents/Work/aoc22/aoc22/inputs/2-sample.txt";

int Day2::p1() {
    
    std::string line;
    std::fstream file(inputLoc); //RAII - Closes on own
   
    while(std::getline(file, line)) {
        if (line.size() == 0) {
            
        } else {
            
        }
    }
    
    return 0;
}

int Day2::p2() {
    
    return 0;
}
