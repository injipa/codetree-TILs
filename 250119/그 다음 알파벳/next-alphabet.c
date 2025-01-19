#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if(a=='z'){
        a=a-26;
    }

    printf("%c", a+1);
    return 0;
}