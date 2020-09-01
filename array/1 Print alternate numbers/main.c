#include <stdio.h>


int main () {

	int arr[10] = {1, 2, 3, 4, 5, 6};

	for (int i = 0; i < 10; i++) {
		
		if (i % 2 == 0) {
			printf("%d ", arr[i]);
		}

		continue;
	}
}