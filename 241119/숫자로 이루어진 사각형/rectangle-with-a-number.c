#include <stdio.h>

void PrintNum(int a){
    int num=0;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
        num=(num%9)+1;
        printf("%d ", num);
        }
        printf("\n");
    }
}
int main() {

    int n;
    scanf("%d", &n);

    PrintNum(n);

    return 0;
}