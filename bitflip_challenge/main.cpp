//
//  main.cpp
//  spacial_coding_challenge
//
//  Created by Xavier Prospero on 6/6/19.
//  Copyright © 2019 Xavier Prospero. All rights reserved.
//

#include <iostream>
#include "test.h"
#include <stdint.h>

#define LENGTH 6
using namespace std;

int main(int argc, const char * argv[]) {
    
    // testinig arrays
    unsigned int inputs[LENGTH] = {26590415, 23336212, 47262296, 14137798, 47969504, 51294464};
    unsigned int outputs[LENGTH] = {4080904576, 682108544, 441748288, 1671293696, 120576832, 9269440};
    
    // Calls test function located in test.h
    cout<<"Testing Normal:" << "\n";
    test_reverse(inputs, outputs, LENGTH, "normal");
    cout<< "\n \n";
    
    cout<<"Testing Recursive:" << "\n";
    test_reverse(inputs, outputs, LENGTH, "recursive");
    return 0;
}
