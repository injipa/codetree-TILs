#include <stdio.h>
#include <string.h>

int main() {
    char str_1[21];
    char str_2[10]="Hello";

    scanf("%s", str_1);
    strcat(str_1, str_2);
    printf("%s", str_1);

    return 0;
}