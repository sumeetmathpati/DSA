#include <stdio.h>


int main() {

	int a[] = {0, 1, 2, 3, 4};
	int *p[] = {a, a+1, a+2, a+3, a+4};	
	int **ptr = p;

	ptr++;
	printf("%d %d %d\n", ptr - p, *ptr - a, **ptr);
	
	*ptr++;
	printf("%d %d %d\n", ptr - p, *ptr - a, **ptr);
	
	*ptr++;
	printf("%d %d %d\n", ptr - p, *ptr - a, **ptr);
	
	++*ptr; 
	printf("%d %d %d\n", ptr - p, *ptr - a, **ptr);
} 

/*
Output
1 1 1
2 2 2
3 3 3
3 4 4
*/