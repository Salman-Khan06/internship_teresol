#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int arr[num - 1];
    int total_no[num - 1];
    if (num < 0)
    {
        while (num < 0)
        {
            cout << "Enter another number: ";
            cin >> num;
        }
    }
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            arr[i] = i + 1;
            if (num % arr[i] == 0)
            {
                total_no[count] = arr[i];
                count++;
            }
        }
        for (int i = 0; i < count; i++)
        {
            /* code */
            cout << "no under" << num << total_no[i] << " ";
        }
    }
    return 0;
}