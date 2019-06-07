import random

def bitflip(x):
    """only works for 32 bit integers"""
    def rec_bflip(arr):
        length = len(arr)
        if length == 1:
            return arr
        length = length // 2
        return rec_bflip(arr[length:]) + rec_bflip(arr[:length])

    # Turn to byte array
    return to_int(rec_bflip(to_bit_array(x)))


def to_bit_array(n):
    return [int(i) for i in '{0:032b}'.format(n)]


def to_int(bitlist):
    ret = 0
    for bit in bitlist:
        ret = (ret << 1) | bit
    return ret







"""TESTING"""

NUM_TESTS = 5

for t in range(NUM_TESTS):
    r = random.randint(1,10000001)
    if int('{:032b}'.format(r)[::-1], 2) == bitflip(r):
        print("test {} passed!".format(t))
    else :
        print("test failed")
        exit()

print("all tests passed")



"""CREATE PAIRS"""
NUM_PAIRS = 6

input, output = [], []
for t in range(NUM_PAIRS):
    r = random.randint(1,100000001)
    input.append(r)
    output.append(bitflip(r))

print("input: ", input)
print()
print("output: ", output)
