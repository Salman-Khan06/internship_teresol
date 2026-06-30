// Name: Salman Khan
// Date: 30 June 2026
// Description: Find the largest element of a given array of integers.

#include <stdio.h>

// Function name uses CamelCase as instructed
int FindLargestElement(int arr[], int size) {
    int max_val = arr[0];
    
    // Loop through array to compare elements
    for(int i = 1; i < size; i++) {
        if(arr[i] > max_val) {
            max_val = arr[i]; // Update if a larger value is found
        }
    }
    return max_val;
}

int main() {
    int input_array[] = {3, 1, 4, 1, 5, 9, 2};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);
    
    printf("Largest element is %d\n", FindLargestElement(input_array, array_size));
    return 0;
}