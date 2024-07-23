#include <stdio.h>

int main() {
    
    int arr[100];
    int cnt=0;

    for(int i=0; i<100; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i]==0)
        break;

        cnt++;
    }

    printf("%d", arr[cnt-1]+arr[cnt-3]+arr[cnt-2]);
    return 0;
}