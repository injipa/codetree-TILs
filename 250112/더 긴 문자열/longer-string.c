#include <stdio.h>
#include <string.h>

int main() {
    char a1[101];
    char a2[101];

    scanf("%s", a1);
    scanf("%s", a2);

    if(strlen(a1)>strlen(a2))
        printf("Coding %d", strlen(a1));
        else if(strlen(a2)>strlen(a1))
        printf("Coding %d", strlen(a2));
        else
        printf("same");
    

    return 0;
}