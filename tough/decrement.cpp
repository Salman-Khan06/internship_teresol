#include <iostream>
using namespace std;
void decrement(int *first, int *second)
{

    if (*first < *second)
    {
        *second = *first;
    }
    else
    {
        *first = *second;
    }
    // *first = *first-1;
    // *second= *second-1;
}
int main()
{
    int a = 3;
    int b = 5;
    decrement(&a, &b);
    cout << a << endl
         << b << endl;
}
