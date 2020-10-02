#include <stdio.h>


int i = 0, j = 1;

void abc(int *p, int *q) {
	p = q;
	*p = 2;
}

int main() {

	
	abc(&i, &j);
	printf("%d %d", i, j);
}

// Output
// 0 2