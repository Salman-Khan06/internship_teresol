// CLOCKWISE ROTATION OF MATRIX

#include <iostream>
using namespace std;

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int LC = 0;
    int RC = 2;
    int TR = 0;
    int BR = 2;

    int prev = A[TR + 1][LC];

    for (int k = LC; k <= RC; k++)
    {
        int term = A[TR][k];
        A[TR][k] = prev;
        prev = term;
    }
    TR++;

    for (int k = TR; k <= BR; k++)
    {
        int term = A[k][RC];
        A[k][RC] = prev;
        prev = term;
    }
    RC--;

    for (int k = RC; k >= LC; k--)
    {
        int term = A[BR][k];
        A[BR][k] = prev;
        prev = term;
    }
    BR--;

    for (int k = BR; k >= TR; k--)
    {
        int term = A[k][LC];
        A[k][LC] = prev;
        prev = term;
    }
    LC++;

    cout << "\nRotated Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}