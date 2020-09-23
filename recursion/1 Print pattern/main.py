'''
Given a number n, print following a pattern without using any loop.

Input: n = 16
Output: 16, 11, 6, 1, -4, 1, 6, 11, 16

Input: n = 10
Output: 10, 5, 0, 5, 10

We basically first reduce 5 one by one until we reach a negative or 0. After we reach 0 or negative, we one add 5 until we reach n.

'''




def printPattern(n):
	
	if (n <= 0):
		print(n, end=' ')
		return
	
	print(n, end=' ')
	printPattern(n - 5)

	print(n, end=' ')



if __name__ == '__main__':

	printPattern(16)