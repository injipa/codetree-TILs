#include <stdio.h>

void fillGrid(int n, int grid[n][n]) {
    int num = 1;  // 채울 숫자
    for (int col = n - 1; col >= 0; col--) {
        if ((n - col) % 2 == 1) {  // 홀수 번째 열은 아래에서 위로
            for (int row = n - 1; row >= 0; row--) {
                grid[row][col] = num++;
            }
        } else {  // 짝수 번째 열은 위에서 아래로
            for (int row = 0; row < n; row++) {
                grid[row][col] = num++;
            }
        }
    }
}

void printGrid(int n, int grid[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int grid[n][n];
    fillGrid(n, grid);

    printGrid(n, grid);

    return 0;
}
