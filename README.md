# bit_mirror_challenge
A short program that will mirror the bits in an integer. 


## Logic
I solved this challenge in both an **iterative** and **recursive** manner. 

The idea in both is the same. Break up the bits into halves and flip those halves. 
This works because 32 is a power of two, leaving a base case where you only flip 2 bits. 

By using this technique I am able to do this in **O(logn)** time. 

## Testing
I tested my methods by creating random numbers with a python script then mirroring the bits in python by brute force. 
I then copied these results into the *test.h* file. 

You can see the number generation in *bitflip.py*.


### Why Recursive?
My decision to also solve this recursivley *(in adition to iterativley)* was to provide a more robust technique that could scale to any size number *(given that its size is a power of 2)* with relative ease. 



