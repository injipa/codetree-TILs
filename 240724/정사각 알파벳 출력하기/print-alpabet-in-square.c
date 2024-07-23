#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt=65;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", cnt);
            cnt++;
        }
        printf("\n");

    }

    return 0;
}