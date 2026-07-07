#include <iostream>
#include <cmath>  

using namespace std;

// 1. The "Hitbox" Checker
bool pointIsNearLocation(float x, float y, float points[4][2])
{
    for (int i = 0; i < 4; ++i)
    {
        float pointX = points[i][0];
        float pointY = points[i][1];

        // Check if the point is within a distance of 1.0
        float distanceSquared = (x - pointX) * (x - pointX) + (y - pointY) * (y - pointY);
        if (distanceSquared <= .70f) 
        {
            return true;
        }
    }
    return false;
}

// 2. The Terminal Renderer
void drawShape(float points[][2])
{
    // Terminal rows print top-to-bottom, so we scan from +10 down to -10
    for (float y = 10; y >= -10; y -= 1)
    {
       for (float x = -10; x <= 10; x += 1)
       {
            if(pointIsNearLocation(x, y, points))
                printf("o "); // Added space to prevent squishing
            else
                printf(". "); // Added space
       }
       printf("\n"); // Drop to the next line after a row finishes
    }
}

// 3. The Main Program
int main() {
    float degrees;
    cout << "Enter rotation angle in degrees: ";
    cin >> degrees;

    float radians = degrees * (M_PI / 180.0f);
    float cosA = cos(radians);
    float sinA = sin(radians);

    // Initial points (Using float)
    float square[4][2] = {
        { 4.0f,  4.0f}, 
        {-4.0f,  4.0f},
        {-4.0f, -4.0f},  
        { 4.0f, -4.0f}   
    };

    float rotatedSquare[4][2];

    // Calculate rotation
    for (int i = 0; i < 4; ++i) {
        float x = square[i][0];
        float y = square[i][1];

        rotatedSquare[i][0] = (x * cosA) - (y * sinA);
        rotatedSquare[i][1] = (x * sinA) + (y * cosA);
    }

    // --- DISPLAY RESULTS ---
    cout << "\n--- Original Matrix (4x2) ---\n";
    for (int i = 0; i < 4; ++i) {
        printf("[ %.1f\t, %.1f ]\n", square[i][0], square[i][1]);
    }
    
    // CALLING FUNCTION: Draw Original
    cout << "\n--- Original Square Visualization ---\n";
    drawShape(square); 

    cout << "\n--- Rotated Matrix at " << degrees << "° (4x2) ---\n";
    for (int i = 0; i < 4; ++i) {
        printf("[ %.4f\t, %.4f ]\n", rotatedSquare[i][0], rotatedSquare[i][1]);
    }
    
    // CALLING FUNCTION: Draw Rotated
    cout << "\n--- Rotated Square Visualization ---\n";
    drawShape(rotatedSquare); 

    // Origin Check
    // if(pointIsNearLocation(0, 0, rotatedSquare))
    //     cout << "\nThe origin (0,0) is near the rotated square.\n";
    // else
    //     cout << "\nThe origin (0,0) is NOT near the rotated square.\n";

    return 0;
}