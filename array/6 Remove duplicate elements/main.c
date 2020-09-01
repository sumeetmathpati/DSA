#include <stdio.h>
#include <stdlib.h>


int *removeDuplicate(int *arr, int size) {

	int *new_arr = (int *)malloc(size * sizeof(int));
	int new_arr_index = 0;

	for (int i = 0; i < size; i++) {

		if (arr[i] != arr[i + 1]) {
			new_arr[new_arr_index] = arr[i];
			new_arr_index++;
		}
	}

	return new_arr;
}

int main() {

	int arr[] = {1, 2, 3, 4, 5};

	int *ptr = removeDuplicate(arr, 5);

	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr[i]);
	}

	return 0;
}