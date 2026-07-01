#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    printf("minimum value of integer: %d\n", INT_MIN);
    printf("maximum value of integer: %d\n", INT_MAX);

    printf("size of float");
    printf("minimum value of float: %e\n", FLT_MIN);
    printf("maximum value of float: %e\n", FLT_MAX);
    printf("lowest negative value of float: %e\n", -FLT_MIN);
    printf("range of unsigned integer");
    printf("minimum value of unsigned integer: %u\n", 0);
    printf("maximum value of unsigned integer: %u\n", UINT_MAX);
    return 0;
}