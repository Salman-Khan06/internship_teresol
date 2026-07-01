#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result[size];
    int index = 0;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            result[index++] = arr[i];
        }
    }

    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            result[index++] = arr[i];
        }
    }

    
    cout << "Output:[ ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}