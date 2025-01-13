#include <stdio.h>

int main() {
    char a[5][20]={"apple", "banana", "grape", "blueberry","orange"};
    char b;
    int count=0;

    scanf("%c", &b); 
    for(int i=0; i<5; i++){
        for(int j=2; j<=3; j++){
        if(a[i][j]==b){
        printf("%s\n", a[i]);
        count++;
        }
        }
    }
    printf("%d", count);
    return 0;
}