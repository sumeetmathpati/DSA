#include <stdio.h>


int main() {

	int a[] = {10, 20, 30, 40, 50};
	int *p[] = {a, a+3, a+4, a+1, a+2};
	int **ptr = p;

	ptr++;
	printf("%d %d\n", ptr - p, **ptr);

	return 0;
}

// Output
// 1 40