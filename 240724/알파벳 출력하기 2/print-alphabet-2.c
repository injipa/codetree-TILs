#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x=65;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j)
            printf("  ");
            else{
            printf("%c ", x);
            if(x==90)
            x=65;
            else
            x++;}
        }
        printf("\n");
    }
    return 0;
}