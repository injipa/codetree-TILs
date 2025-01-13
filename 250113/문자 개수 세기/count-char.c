#include <stdio.h>
#include<string.h>
int count=0;

int main() {
    char a[101];
    char b;
    fgets(a, 101, stdin);
    scanf("%c", &b);

    for(int i=0; i<strlen(a); i++){
        if(a[i]==b)
        count++;
    }

    printf("%d", count);

    return 0;
}