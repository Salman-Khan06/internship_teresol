#include <iostream>
using namespace std;

int main()
{
    int input_array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(input_array) / sizeof(input_array[0]);
    int output_array[size];
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (input_array[i] % 2 == 0)
        {
            output_array[index] = input_array[i];
            index++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (input_array[i] % 2 != 0)
        {
            output_array[index] = input_array[i];
            index++;
        }
    }
    cout << "The output array is: ";
    for (int i = 0; i < index; i++)
    {
        cout << output_array[i] << " ";
    }
    return 0;
}
