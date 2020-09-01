#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Counts the numbers which are less than equal to n
// Array is sorted
int count(int *arr, int size, int n) {

	int left = 0;
	int right = size - 1;
	int mid = 0;
	int count = 0;

	while (left <= right) {

		mid = ((right + left) / 2);

		if (arr[mid] <= n) {
			count = mid + 1;
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	return count;
}

int main() {

	int arr[10] = {1, 3, 5, 7, 9, 11, 11, 15, 17, 19};
	printf("%d\n", count(arr, 10, 11));
}