#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);

   for(int i=1; i<=9; i++){
    for(int j=b; j>=a; j--){
        if(j%2==0){
            printf("%d * %d = %d ", j,i,j*i);
            if(j!=a)
             printf("/ ");
        }
        

    }
    printf("\n");
   }
    return 0;
}