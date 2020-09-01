#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int len = 10;
int array[10];

int add(int index, int data) {

	if ((index + 1) > len) {
		return -1;
	}
	array[index] = data;
	return 0;
}

void display() {

	for (int i = 0; i < len; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");
}

int linearSearch(int x) {

	for (int i = 0; i < len; i++) {
		if (x == array[i]) {
			return i;
		}
	}

	return -1;
}

int delete(int x) {

	for (int i = 0; i < len; i++) {
		if (x == array[i]) {
			int tmp = array[i];
			array[i] = 0;
			return tmp;
		}
	}

	return -1;
}

int *reverse() {

	int *rev = (int *)malloc(len * sizeof(int));

	for(int i = (len - 1); i >= 0; i--) {
		rev[(len - 1) - i] = array[i];
	}

	return rev;
}

void main () {

	// Initialize aray to zero
	for (int i = 0; i < len; i++) {
		array[i] = 0;
	}

	// Insert into array
	add(0, 1);
	add(1, 2);
	add(3, 3);
	add(11, 1);

	printf("Array: ");
	display();

	// printf("%d\n", linearSearch(1));

	int *rev = reverse();
	printf("Reversed array: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", rev[i]);
	}

}