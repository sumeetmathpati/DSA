// The cost of stock on each day is given in an array A[] of size N. 
// Find all the days on which you buy and sell the stock so that in 
// between those days your profit is maximum.

#include <stdio.h>
#include <stdlib.h>

void findDays(int *arr, int size) {

	int first = -1;
	int second = -1;

	for (int i = 0; i <= (size); i++) {
		if (arr[i+1] > arr[i] && first == -1) {
			first = i;
			second = i + 1;
		} else if (arr[i+1] > arr[i] && (i + 1) < size) {
			second = i+1;
		} else {
			printf("%d - %d\n", first, second);
			first = -1;
		}
	}
}

int main() {

	int arr[] = {23, 13, 25, 29, 33, 19, 34, 45, 65, 67 };
	findDays(arr, sizeof(arr)/sizeof(int));

	return 0;

}