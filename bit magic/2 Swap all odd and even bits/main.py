# Given an unsigned integer, swap all odd bits with even bits. 
# For example, if the given number is 23 (00010111), it should be converted to 43 (00101011). 
# Every even position bit is swapped with adjacent bit on right side (even position bits are highlighted in 
# binary representation of 23), and every odd position bit is swapped with adjacent on left side.

def swap_bits(n):

	even_bits = n & 0xAAAAAAAA
	odd_bits = n & 0x55555555

	even_bits >>=1
	odd_bits <<= 1

	return even_bits | odd_bits

x = 23
print(swap_bits(x))