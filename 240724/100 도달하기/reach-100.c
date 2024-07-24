#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    arr[0]=1;
    arr[1]=n;
    int cnt=1;

    for(int i=2; i<100; i++){
        arr[i]=arr[i-2]+arr[i-1];

        cnt++;

        if(arr[i]>100)
        break;


    }

    for(int i=0; i<=cnt; i++)
    printf("%d ", arr[i]);
    return 0;
}