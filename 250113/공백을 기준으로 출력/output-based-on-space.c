#include <stdio.h>
#include <string.h>
int main() {
    char a1[100];
    char a2[100];

    fgets(a1, 100, stdin);
    fgets(a2, 100, stdin);

    for(int i=0; i<strlen(a1); i++){
        if(a1[i]!='\0'&&a1[i]!=' '&&a1[i]!='\n'){
        printf("%c", a1[i]);
        }
    }

    for(int i=0; i<strlen(a2); i++){
        if(a2[i]!='\0'&&a2[i]!='\n'&&a2[i]!=' '){
        printf("%c", a2[i]);
        }
    }

    return 0;
}