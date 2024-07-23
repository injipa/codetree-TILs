#include <stdio.h>

int main() {
    
    double sum=0;

    for(int i=0; i<8; i++){
        double n;
        scanf("%lf", &n);
        sum+=n;
    }

    printf("%.1lf", (double)sum/8 );
    return 0;
}