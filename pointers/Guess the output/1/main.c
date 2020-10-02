#include <stdio.h>


int x;

void q(int z) {
	z += x;
	printf("%d\n", z);
}

void p(int *y) {
	int x = *y + 2;
	q(x);
	*y = x - 1;
	printf("%x\n", x);
}

int main() {

	x = 5;
	p(&x);
	printf("%d\n", x);
	
	return 0;
}

// Output
// 12
// 7
// 6