#include <stdio.h>

int main() {
    char a, b;
    scanf("%s %s", &a, &b);

    int c=(int)a;
    int d=(int)b;

    int sub;
    if(c>d)
    sub=c-d;
    else
    sub=d-c;

    printf("%d %d", c+d, sub);
    return 0;
}