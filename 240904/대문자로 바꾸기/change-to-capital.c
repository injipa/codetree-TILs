#include <stdio.h>

int main() {

    char ch_2d[5][3];

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            scanf("%c ", &ch_2d[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%c ", ch_2d[i][j]-32);
        }
        printf("\n");
    }
    
    return 0;
}