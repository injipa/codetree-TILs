#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int cnt=0;

    for(int i=1; i<=100; i++){
        arr[i]=n*i;

        printf("%d ", arr[i]);
        if(arr[i]%5==0)
        cnt++;

        if(cnt==2)
        break;
    }

    return 0;
}