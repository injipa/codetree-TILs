#include <stdio.h>
#include <string.h>

char a[101];

int main() {
    int len;

    for(int i=0; i<2; i++){
    scanf("%s", a);
    len+=strlen(a);
    }

    printf("%d", len);
}