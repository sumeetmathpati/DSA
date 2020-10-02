#include <stdio.h>

int main() {

	int i = 10;
	int *iptr;
	int **ipptr;
	
	iptr = &i;
	ipptr = &iptr;

	// Statements with same number of bars have same output.

	printf("%u\n", &i);		// |
	printf("%u\n", iptr);	// |
	printf("%u\n", *ipptr);	// |
	printf("%u\n", &iptr);	// ||
	printf("%u\n", ipptr);	// ||
	printf("%u\n", &ipptr);	// |||

	// Statements with same number of bars have same output.

	printf("%u\n", iptr);		// |
	printf("%u\n", ipptr);		// ||
	printf("%d\n", i);			// |||
	printf("%u\n", *(&i));		// |||
	printf("%u\n", *iptr);		// |||
	printf("%u\n", **ipptr);	// |||


	return 0;
}