#include <iostream>
using namespace std;
void square(int* num)
{
    *num = *num * *num;
    
}
int main()
{
    int n;
    cout << "enter your no \n";
    cin >> n;
    int temp = n;
    square(&n);
    cout << "square of " << temp << " is: " << n << endl;
}