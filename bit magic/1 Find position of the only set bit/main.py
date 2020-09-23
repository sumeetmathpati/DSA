# Given a number having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit.


def Log2n(n): 
    if (n > 1): 
        return (1 + Log2n(n / 2)) 
    else: 
        return 0
		
		   
def isPowerOfTwo(n): 
    return n and (not (n & (n-1)) ) 
      
def findPosition(n): 
    if (not isPowerOfTwo(n)): 
        return -1
    return Log2n(n) + 1

n = 128; 
pos = findPosition(n); 
if (pos == -1): 
    print("n =", n, ", Invalid number"); 
else: 
    print("n =", n, ", Position ", pos); 