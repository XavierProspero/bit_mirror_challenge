//
//  test.h
//  spatial_coding_challenge
//
//  Created by Xavier Prospero on 6/6/19.
//  Copyright © 2019 Xavier Prospero. All rights reserved.
//

#ifndef test_h
#define test_h
#include "reverse.h"
#include "recursive_reverse.h"
#include <stdint.h>

using namespace std;


void test_reverse(unsigned int input[], unsigned int output[], int LENGTH, string rec) {
    int result = 0;
    
    for (int i = 0; i < LENGTH; i ++) {
        if (rec == "recursive") {                               // checking which function it should test
            result = recursive_reverse(input[i]);
        } else {
            result = reverse(input[i]);                         // checking which function it should test
        }
        
        if (result == output[i]) {
            std::cout << "test " << i + 1 << " passed! \n";
        } else {
            std::cout << "test " << i + 1 << " failed \n";
            std::cout << result;
            return;
        }
    }
    
    std::cout << "all test cases passed for "<<rec << "! \n \n";
}


#endif /* test_h */
