#include <iostream>
using namespace std;
int main()
{
    cout << "Kindly enter your age...";
    int age;
    cin >> age;
    cout << "Do you have citizenship? (1 for Yes, 0 for No): ";
    bool hasCitizenship;
    cin >> hasCitizenship;
    if (age >= 18 && hasCitizenship)
    {
        cout << "You are eligible to vote !!!!! ";
    }
    else
    {
        cout << "You are not eligible to vote ...";
    }
    return 0;
}