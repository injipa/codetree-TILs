#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int remainder_count[b];
    for (int i = 0; i < b; i++) {
        remainder_count[i] = 0;
    }

    while (a > 1) {
        int remainder = a % b;
        remainder_count[remainder]++;
        a = a / b;
    }

    int sum_of_squares = 0;
    for (int i = 0; i < b; i++) {
        sum_of_squares += remainder_count[i] * remainder_count[i];
    }

    printf("%d\n", sum_of_squares);

    return 0;
}