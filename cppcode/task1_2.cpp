#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b = 1;
    a = b ^ a;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapp a = " << a << ", b = " << b << endl;
    //  with operations 
    
    a = a-b;
    b = a+b;
    a = b-a;
    cout<<"After swapp in operations a = " << a << ", b = " << b << endl;
    
    return 0; 
}