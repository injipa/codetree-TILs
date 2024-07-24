#include <stdio.h>

int main() {
    int arr[11];

    int a, b;
    scanf("%d%d", &a, &b);

    arr[1]=a; arr[2]=b;

    for(int i=3; i<11; i++){
        arr[i]=arr[i-2]+arr[i-1];
    }

    for(int i=1; i<11; i++)
    printf("%d ", arr[i]%10);
    
    return 0;
}