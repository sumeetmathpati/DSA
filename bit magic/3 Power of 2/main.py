# Given a positive integer N. The task is to check if N is a power of 2. That is N is 2x for some x.

def isPowerOfTwo(n): 
    return n and (not (n & (n-1)) ) 


print(isPowerOfTwo(3))