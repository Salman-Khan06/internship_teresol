#include <stdio.h>

int main() {
    int number;
    
    printf("Input: Number = ");
    scanf("%d", &number);
    
    printf("Output:\n");
    
    // Loop from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, (number * i));
    }

    return 0;
}