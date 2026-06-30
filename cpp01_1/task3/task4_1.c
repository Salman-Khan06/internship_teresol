// Name: Salman Khan
// Date: 30 June 2026
// Finding the average of elements 

#include <stdio.h>

int FindAverage(int arr[], int size) {
    int sum_total = 0;
    
    for(int i = 0; i < size; i++) {
        sum_total += arr[i];
    }
    
    
    return sum_total / size; 
}

int main() {
    int input_array[] = {10, 20, 30, 41, 50};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);
    
    printf("Output: %d\n", FindAverage(input_array, array_size));
    return 0;
}