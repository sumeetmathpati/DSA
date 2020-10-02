#include <stdio.h>


int main() {

	int arr[] = {0, 1, 2, 3, 4};
	int *ptr;

	for (ptr = arr+4; ptr >= arr; ptr--) {
		printf("%d\n", arr[ptr-arr]);
	}

	return 0;
}

/*
Output
4
3
2
1
0
*/