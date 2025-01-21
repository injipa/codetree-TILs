#include <stdio.h>

 void commin(int n, int m){
    int index=0;
    for(int i=(n>m?n:m); ;i++){
        if(i%n==0&&i%m==0){
            index=i;
            break;
        }
    }
    printf("%d", index);
    }

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    commin(n, m);

   
    return 0;
}