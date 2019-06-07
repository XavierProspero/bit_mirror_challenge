//
//  recursive_reverse.h
//  spatial_coding_challenge
//
//  Created by Xavier Prospero on 6/6/19.
//  Copyright © 2019 Xavier Prospero. All rights reserved.
//


#ifndef recursive_reverse_h
#define recursive_reverse_h
#define SIZE 32


int* toBitArray(int n);                             // int to array of bits
int toInt(int arr[]);                               // array of bits to int
int* rec_reverse(int arr[], int length);            // Recursive function

int recursive_reverse(int number) {
// A shell function that turns number to bit array then calls recursive function.
    int * bitArray;
    bitArray = toBitArray(number);
    int ret = toInt(rec_reverse(bitArray, (int) (SIZE / 2)));
    return ret;
    
}


int* rec_reverse(int * arr, int length) {
// Recursivley breaks down bit array into halfs and flips
    
    if (length == 1) {                              // base case
        return arr;
    } else {
        
        int * arr1 = new int [length];
        int * arr2 = new int [length];
        
        for (int i = 0; i < length; i ++) {         // create two half arrays
            arr1[i] = arr[i];
            arr2[i] = arr[i + length];
        }
        
        int l = (int) length / 2;
        
        
        int * ret1;
        int * ret2;
        
        ret1 = rec_reverse(arr1, l);                // reverse half arrays.
        ret2 = rec_reverse(arr2, l);
        
        int * ret = new int[length * 2];
        
        for (int i = 0; i < length; i ++) {         // rejoin reversed halves.
            ret[i] = ret1[i];
            ret[i + length] = ret2[i];
        }
        return ret;        
    }
}

int* toBitArray(int n) {
// Turn an integer into an array of bits.
    int * ret = new int[SIZE];
    for (int i = 0; i < SIZE; i++) {
        ret[i] = (int)((n >> i) & 1);
    }
    return ret;
    
}

int toInt(int arr[]) {
// Turn an array of bits into an integer.
    int ret = 0;
    for (int i = 0; i < SIZE; i++) {
        ret = ret << 1;
        ret = (ret | arr[i]);
    }
    return ret;
}
#endif /* recursive_reverse_h */
