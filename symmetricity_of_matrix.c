  Program: Check Symmetry of a Matrix
   Author: Atherva Mishra
   Description:
    Checks whether a square matrix is symmetric

#include <stdio.h>
int main() {
    int matrix_txt[3][3] = {{1,2,3}, {2,4,5}, {3,5,6}};
    int i, j;
    int symmetricity = 1; // assume symmetric, disprove if mismatch found

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix_txt[i][j] != matrix_txt[j][i]) {
                symmetricity = 0;  // found mismatch
                break;
            }
        }
        if (!symmetricity) break; // stop checking if already false
    }

    if (symmetricity == 1)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
