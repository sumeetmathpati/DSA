#include <stdio.h>


// Straight max/min function O(n)
void getMinMax(int *arr, int *retMin, int *retMax) {

	*retMax = 0;
	*retMin = 0;

	for (int i = 0; i < 10; i++) {

		if (arr[i] > *retMax) {
			*retMax = arr[i];
		}

		if (arr[i] < *retMin) {
			*retMin = arr[i];
		}
	}

}

// Divide and concur function O(n)
void getMinMaxDC(int *arr, int i, int j, int *min, int *max) {

	int max1, max2, min1, min2;

	// If there is single element in array
	if (i == j) {
		*min = arr[i];
		*max = arr[i];
		return ;
	}

	// If there are two elements in array
	if ( i == j - 1) {
		if (arr[i] > arr[j]) {
			*min = arr[j];
			*max = arr[i];
		} else {
			*min = arr[i];
			*max = arr[j];
		}
	} else {
		int mid = (i + j) / 2;
		getMinMaxDC(arr, i, mid, &min1, &max1);
		getMinMaxDC(arr, mid, j, &min2, &max2);

		if (max1 > max2) {
			*max = max1;
		} else {
			*max = max2;
		} if (min1 < min2) {
			*min = min1;
		} else {
			*min = min2;
		}
	}
}

int main () {

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	int min;
	int max;

	// getMinMax(arr, &min, &max);
	getMinMaxDC(arr, 0, 9, &min, &max);

	printf("Max: %d, Min: %d\n", max, min);
}