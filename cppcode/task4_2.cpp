// Rotation of a square matrix by a given angle in degrees


#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double degrees;
    cout << "Enter rotation angle in degrees: ";
    cin >> degrees;

    double radians = degrees * (M_PI / 180.0);
    double cosA = cos(radians);
    double sinA = sin(radians);

    double square[4][2] = {
        { 1.0,  1.0}, 
        {-1.0,  1.0},
        {-1.0, -1.0},  
        { 1.0, -1.0}   
    };

    double rotatedSquare[4][2];


    for (int i = 0; i < 4; ++i) {
        double x = square[i][0];
        double y = square[i][1];

        // x' = x * cos(A) - y * sin(A)
        rotatedSquare[i][0] = (x * cosA) - (y * sinA);
        // y' = x * sin(A) + y * cos(A)
        rotatedSquare[i][1] = (x * sinA) + (y * cosA);
    }

    cout << "\n--- Original Matrix (4x2) ---\n";
    for (int i = 0; i < 4; ++i) {
        printf("[ %.1f\t, %.1f ]\n", square[i][0], square[i][1]);
    }

    cout << "\n--- Rotated Matrix at " << degrees << "° (4x2) ---\n";
    for (int i = 0; i < 4; ++i) {
        printf("[ %.4f\t, %.4f ]\n", rotatedSquare[i][0], rotatedSquare[i][1]);
    }

    return 0;
}
