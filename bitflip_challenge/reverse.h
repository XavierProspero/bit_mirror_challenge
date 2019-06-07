//
//  reverse.h
//  bitflip_challenge
//
//  Created by Xavier Prospero on 6/6/19.
//  Copyright © 2019 Xavier Prospero. All rights reserved.
//

#ifndef reverse_h
#define reverse_h

// pre defined bit patterns
int i16 = 0xFFFF0000;
int i8  = 0xFF00FF00;
int i4  = 0xF0F0F0F0;
int i2  = 0xCCCCCCCC;
int i1  = 0xAAAAAAAA;

int reverse(int number) {
// Start from big to small.
// Hardcoded but still looks kinda nice.
    unsigned int num = number;
    num = ((num & i16) >> 16) | ((num & (i16 >> 16)) << 16);
    num = ((num & i8) >> 8)   | ((num & (i8 >> 8)) << 8);
    num = ((num & i4) >> 4)   | ((num & (i4 >> 4)) << 4);
    num = ((num & i2) >> 2)   | ((num & (i2 >> 2)) << 2);
    num = ((num & i1) >> 1)   | ((num & (i1 >> 1)) << 1);
    
    return num;
}

#endif /* reverse_h */
