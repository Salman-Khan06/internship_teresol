#include <iostream>
using namespace std;
int main()
{
    char grid[11][11];

    for (int y = 0; y < 11; ++y)
    {
        for (int x = 0; x < 11; ++x)
        {
            grid[y][x] = '.';
        }
    }
    
    grid[5][5] = 'o';

    for (int y = 0; y < 11; ++y)
    {
        for (int x = 0; x < 11; ++x)
        {
            cout << grid[y][x] << " ";
        }
        cout << "\n";
    }
    return 0;
}

bool pointIsNearLocation(float x, float y, float points[][2])
{
    for (int i = 0; i < 4; ++i)
    {
        float pointX = points[i][0];
        float pointY = points[i][1];

        // Check if the point is within a certain distance (e.g., 1.0) from the given location
        float distanceSquared = (x - pointX) * (x - pointX) + (y - pointY) * (y - pointY);
        if (distanceSquared <= 1.0f) // Using squared distance to avoid sqrt for efficiency
        {
            return true;
        }
    }
    return false;
}

void drawShape(float points[][2])
{
    for (float y = 0; y < 10; y+=1)
    {
       for (float x =-10; x <= 10; x += 1)
       {
            if(pointIsNearLocation(x,y,points))
                printf("o");
            else
                printf(".");
       }
       
    }
}
