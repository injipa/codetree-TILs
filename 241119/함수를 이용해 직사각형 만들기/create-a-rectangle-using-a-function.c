#include <stdio.h>

void PrintOnes(int a, int b){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++)
        printf("1");

        printf("\n");
    }
}


int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    
    PrintOnes(n, m);
    return 0;
}