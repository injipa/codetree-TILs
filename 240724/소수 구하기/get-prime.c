#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
            sum++;
        }
        if(sum==2)
        printf("%d ", i);

    }
    return 0;
}