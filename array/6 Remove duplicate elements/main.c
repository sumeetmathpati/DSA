#include <stdio.h>
#include <stdlib.h>

// For unsorted array. Elements should be from 0 to 99.
int *removeDuplicate(int *arr, int size) {

	int flagArr[100];
	int *newArr = (int *)malloc(size * sizeof(int));
	int newArrIndex = 0;

	// Initialize the flag array with 0
	for (int i = 0; i < 100; i++) {
		flagArr[i] = 0;
	}

	for (int i = 0; i < size; i++) {

		if (flagArr[arr[i]]  == 1) {
			continue;
		} else {
			flagArr[arr[i]] = 1;
			newArr[newArrIndex] = arr[i];
			newArrIndex++;
		}
	}
	return newArr;
}

// For sorted array O(n)
int *removeDuplicateSorted(int *arr, int size) {

	int *newArr = (int *)malloc(size * sizeof(int));
	int newArrIndex = 0;

	for (int i = 0; i < size; i++) {

		if (arr[i] != arr[i + 1]) {
			newArr[newArrIndex] = arr[i];
			newArrIndex++;
		}
	}

	return newArr;
}

int main() {

	int arr[] = {1, 7, 7, 4, 89, 89, 3, 3};

	int *ptr = removeDuplicate(arr, 8);

	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr[i]);
	}

	return 0;
}