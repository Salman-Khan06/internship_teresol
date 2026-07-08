#include <iostream>
using namespace std;

int main()
{
    int expected[5] = {10, 20, 30, 40, 50};
    int actual[5] = {12, 19, 33, 38, 51};
    for (int i = 0; i < 5; i++)
    {
        printf("diff at %d = %d\n", i, (expected[i]-actual[i]));
    }
}
