#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x=65;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
        printf("%c", x);
        x++;}
        printf("\n");
    }
    return 0;
}