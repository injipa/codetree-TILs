#include <stdio.h>

int main() {
    
    int arr_1d[3][3];
    int arr_2d[3][3];
    int arr_3d[3][3];

    // Input for arr_1d
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr_1d[i][j]);  // Taking input for arr_1d
        }
    }

    // Input for arr_2d
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr_2d[i][j]);  // Taking input for arr_2d
        }
    }

    // Multiplying arr_1d and arr_2d, storing in arr_3d
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr_3d[i][j] = arr_1d[i][j] * arr_2d[i][j];  // Element-wise multiplication
            printf("%d ", arr_3d[i][j]);  // Printing arr_3d[i][j] (fixed)
        }
        printf("\n");  // To print each row on a new line
    }

    return 0;
}