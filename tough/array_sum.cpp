#include <iostream>
using namespace std;

int subArraySum(int *start, int *end)
{
    int sum = 0;
    for (start; start <= end ; start++)
    {
        sum += *start;
    }
    return sum;
}

int main()
{
    int arr[] = {2,4,6,8,12,14,10,20,25,5,20,16,8,4};

    int sum = subArraySum(&arr[1], &arr[3]);

    cout << sum << endl;

    return 0;
}