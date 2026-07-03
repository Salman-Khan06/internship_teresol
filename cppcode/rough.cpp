#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    // Keep asking until a positive number is entered
    do
    {
        cout << "Enter a positive number: ";
        cin >> num;
    } while (num <= 0);

    cout << "Prime numbers less than " << num << " are: ";

    // Check every number less than num
    for (int i = 2; i < num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}