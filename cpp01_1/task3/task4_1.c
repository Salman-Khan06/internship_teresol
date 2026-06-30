// Name: Salman Khan
// Date: 30 June 2026
// Description: Find the average of elements in an array of integers.

#include <stdio.h>

int FindAverage(int arr[], int size) {
    int sum_total = 0;
    
    // Calculate the total sum of all elements
    for(int i = 0; i < size; i++) {
        sum_total += arr[i];
    }
    
    // Return integer average 
    return sum_total / size; 
}

int main() {
    int input_array[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);
    
    printf("Output: %d\n", FindAverage(input_array, array_size));
    return 0;
}