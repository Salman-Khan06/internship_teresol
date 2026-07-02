#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if(count == 1){
        cout << "the no is prime";
    } else{
        cout << "the no is not prime";
    }

    return 0;
}