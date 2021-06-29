/*
Input: Unsorted array.
Output: Minimum and maximum element.
Time complexity: O(n)

Note: Linear search is better than this.
*/

#include <stdio.h>
#include <stdlib.h>

int * getMinMax(int *arr, int l, int r) {
    
    int *result = (int *)malloc(2 * sizeof(int));

    if (r == (l + 1)) {

        if (arr[l] <= arr[r])

            return arr;
        else {

            result[0] = arr[r];
            result[1] = arr[l]; 
            return result;
        }
            
    } else if (l == r) {

        result[0] = arr[l];
        result[1] = arr[l];

        return result;
    } else {

        int mid = (l + r) / 2;
        int *leftMinMax = getMinMax(arr, l, mid);
        int *rightMinMax = getMinMax(arr, mid + 1, r);
        
        if (leftMinMax[0] < rightMinMax[0])  {
            result[0] = leftMinMax[0];
        } else {
            result[0] = rightMinMax[0];
        }

        if (leftMinMax[1] >  rightMinMax[1])  {
            result[1] = leftMinMax[1];
        } else {
            result[1] = rightMinMax[1];
        }
    }

    return result;

}

int main() {

    int array[5] = {100, 200, 1};

    // First element is 0, last element is sizr - 1.
    int *ans = getMinMax(array, 0, 2);

    printf("Min: %d, Max: %d.", ans[0], ans[1]);
}