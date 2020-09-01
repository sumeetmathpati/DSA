#include <stdio.h>


int getSecondLrgest(unsigned int *arr, int size) {

	if (size < 2) {
		return -1;
	} 

	int first = -1;
	int second = -1;

	for (int i = 0; i < size; i++) {

		printf("%d\n", second);

		if (arr[i] > first) {
			second = first;
			first = arr[i];
		} else if(arr[i] > second && arr[i] != first) {
			second = arr[i];
		}
	}

	return second;
}

int main() {

	unsigned int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	printf("Second largest number in array is %d", getSecondLrgest(arr, 10));
}