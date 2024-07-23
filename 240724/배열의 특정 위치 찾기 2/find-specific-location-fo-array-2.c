#include <stdio.h>

int main() {
    int arr[10];
    int sum1=0;
    int sum2=0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        if((i+1)%2==1)
        sum1+=arr[i];
        else
        sum2+=arr[i];
    }

    if(sum1>=sum2){
        printf("%d", sum1-sum2);
    }
    else
    printf("%d", sum2-sum1);
    
    return 0;
}