#include <stdio.h>

int main() {
    int arr[10];
    int sum=0;
    int sum1=0;
    double avg=0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);

        if(i%2==1)
        sum+=arr[i];

        if((i+1)%3==0)
        sum1+=arr[i];
        avg=sum1/3;
    }

    printf("%d %.1lf", sum, avg);

    return 0;
}