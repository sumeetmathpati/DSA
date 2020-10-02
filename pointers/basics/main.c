#include <stdio.h>

int main() {

	int i = 10;
	int *iptr = &i;

	// Statements with same number of bars have same output.

	printf("%d\n", i);		// |
	printf("%d\n", &i);		// ||
	printf("%d\n", *(&i));	// |
	printf("%u\n", iptr);	// ||
	printf("%u\n", *iptr);	// |
	printf("%u\n", &iptr);	// |||

	return 0;
}