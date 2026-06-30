// Name: Salman Khan
// Date: 30 June 2026

#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned long long int large_number = 1234567890123456789ULL;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of bool: %zu byte\n", sizeof(bool));
    
    return 0;
}