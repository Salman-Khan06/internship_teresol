//Spiral traversal ....


#include <iostream>
using namespace std;
int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int LC = 0; 
    int RC = 2; 
    int TR = 0; 
    int BR= 2; 
    int dir = 0; 
    
    cout <<"[";
    while (LC <= RC && TR <= BR) {
        
        if (dir == 0) { 
            for (int k = LC; k <= RC; k++) {
                cout << A[TR][k];
                cout << ", ";
            }
            TR++;
        } 
        else if (dir == 1) { 
            for (int k = TR; k <= BR; k++) {
                cout << A[k][RC];
                cout << ", ";
            }
            RC--; 
        } 
        else if (dir == 2) { 
            for (int k = RC; k >= LC; k--) {
                cout << A[BR][k];
                cout << ", ";
            }
            BR--; 
        } 
        else if (dir == 3) { 
            for (int k = BR; k >= TR; k--) {
                cout << A[k][LC];
                cout << ", ";
            }
            LC++; 
        }
        
        dir = (dir + 1) % 4;
    }

    cout << "]" << endl;

    return 0;
}