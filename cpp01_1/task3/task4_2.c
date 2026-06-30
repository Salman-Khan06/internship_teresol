// Name: Salman Khan
// Find the most frequent element in an array of integers.

#include <stdio.h>

int FindMostFrequent(int arr[], int size) {
    int max_count = 0;
    int most_frequent = arr[0];

    // Nested loop to count occurrences of each element
    for (int i = 0; i < size; i++) {
        int current_count = 0;
        
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                current_count++;
            }
        }
        
        
        if (current_count > max_count) {
            max_count = current_count;
            most_frequent = arr[i];
        }
    }
    return most_frequent;
}

int main() {
    int input_array[] = {1, 3, 3, 3, 2, 1, 1, 1, 1, 2};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);

    printf("Most frequent element is %d\n", FindMostFrequent(input_array, array_size));
    return 0;
}