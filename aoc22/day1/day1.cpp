//
//  Created by Kemal Enver on 2/12/2022.
//

#include "day1.hpp"

#include <algorithm>
#include <fstream>
#include <string>
#include <vector>

const std::string inputLoc = "/Users/kemal.enver/Documents/Work/aoc22/aoc22/inputs/1-input.txt";
//const std::string inputLoc = "/Users/kemal.enver/Documents/Work/aoc22/aoc22/inputs/1-sample.txt";


int Day1::p1() {
    
    std::string line;
    std::fstream file(inputLoc); //RAII - Closes on own
    
    int maxCalories = 0, calories = 0;

    while(std::getline(file, line)) {
        if (line.empty()) {
            // On a new line we reset to 0 and start adding again
            maxCalories = std::max(maxCalories, calories);
            calories = 0;
        } else {
            // Add to the existing calory count
            calories += std::stoi(line);
        }
    }
    
    maxCalories = std::max(maxCalories, calories);
    
    return maxCalories;
}

int Day1::p2() {
    
    std::string line;
    std::fstream file(inputLoc);
    
    std::vector<int> totals = { 0 };
    while(std::getline(file, line)) {
        if (line.size() == 0) {
            // Add a new element the the end of the vector when we have an empty line
            totals.emplace_back(0);
        } else {
            // add number on next line to the total stored at the end of the vector
            totals.back() += std::stoi(line);
        }
    }
    
    // Sort the vector descending
    std::sort(std::begin(totals), std::end(totals), std::greater<int>());
    
    // Add the first n elements
    int n = 3;
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += totals[i];
    }
    return sum;
}
