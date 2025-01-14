#include <stdio.h>

int main() {
    char str_1[21];
    char str_2[21];

    scanf("%s", str_1);
    scanf("%s", str_2);

    str_2[0]=str_1[0];
    str_2[1]=str_1[1];

    printf("%s", str_2);
    return 0;
}