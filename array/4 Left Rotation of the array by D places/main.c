#include <stdio.h>
#include <stdlib.h>

void rotateLeftByD(int *arr, int d, int size) {

	int *d_array = (int *)malloc(sizeof(int) * d);

	// Get d elements into temporary array
	for (int i = 0; i < d; i++) {
		d_array[i] = arr[i];
	}

	// Shift arr by d places left
	for (int i = 0; i < (size - d); i++) {
		arr[i] = arr[i + d];
	}

	// Put d_array back to origional array
	for (int i = 0; i < d; i++) {
		arr[size - d + i] = d_array[i];
	}
}

int main() {

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	rotateLeftByD(arr, 5, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;

}