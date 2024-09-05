#include <stdio.h>

int main() {
    int arr_2d[100][100]; // Array to store the numbers
    int n, m; // Dimensions of the matrix
    int num = 0; // Starting number

    // Input the dimensions
    scanf("%d %d", &n, &m);

    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) { // For even columns, fill top to bottom
            for (int i = 0; i < n; i++) {
                arr_2d[i][j] = num++;
            }
        } else { // For odd columns, fill bottom to top
            for (int i = n - 1; i >= 0; i--) {
                arr_2d[i][j] = num++;
            }
        }
    }

    // Output the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}