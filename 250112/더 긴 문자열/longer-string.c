#include <stdio.h>
#include <string.h>

int main() {
    char a1[21];
    char a2[21];

    scanf("%s", a1);
    scanf("%s", a2);

    if(strlen(a1)>strlen(a2))
        printf("%s %d", a1,strlen(a1));
    if(strlen(a2)>strlen(a1))
        printf("%s %d", a2,strlen(a2));
    if(strlen(a1)==strlen(a2))
        printf("same");
    

    return 0;
}