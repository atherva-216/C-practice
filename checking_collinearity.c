#include <stdio.h>

// Function to check if points are collinear
void check(int x[], int y[], int n) {
    int i;
    int is_collinear = 1; // assume true initially

    for (i = 0; i < n - 2; i++) {
        int dx1 = x[i+1] - x[i];
        int dy1 = y[i+1] - y[i];
        int dx2 = x[i+2] - x[i+1];
        int dy2 = y[i+2] - y[i+1];

        // Cross product method to avoid division
        if (dx1 * dy2 != dx2 * dy1) {
            is_collinear = 0;
            break;
        }
    }

    if (is_collinear)
        printf("The coordinates are collinear.\n");
    else
        printf("The coordinates are not collinear.\n");
}

int main() {
    int n, i;
    printf("Enter the number of coordinates: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 points.\n");
        return 0;
    }

    int x[n], y[n];
    printf("Enter %d pairs of (x y):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    check(x, y, n);
    return 0;
}












ChatGPT can ma
