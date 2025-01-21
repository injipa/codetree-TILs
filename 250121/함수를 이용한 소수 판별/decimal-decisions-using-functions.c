#include <stdio.h>

int prime(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++){
        int index=0;
        for(int j=2; j<=i; j++){
            if(i%j==0)
            index++;

        }
         if(index==1)
            sum+=i;
    }

    return sum;

} 

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    printf("%d",prime(n,m));
    
    return 0;
}