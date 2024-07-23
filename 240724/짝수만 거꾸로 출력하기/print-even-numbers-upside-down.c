#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int cnt=0;

    for(int i=0; i<n; i++){

        scanf("%d", &arr[i]);
        cnt++;

    }

    for(int i=cnt-1; i>=0; i--){
        if(arr[i]%2==0)
        printf("%d ", arr[i]);
    }
    return 0;
}