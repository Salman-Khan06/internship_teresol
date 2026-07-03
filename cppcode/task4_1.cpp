#include <iostream>
using namespace std;

int main()
{
    int X[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    int Y[5][3] = {
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18},
        {19, 20, 21}
    };

    int result_matrix[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result_matrix[i][j] += X[i][k] * Y[k][j];
            }
        }
    }

    cout << "Result Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}