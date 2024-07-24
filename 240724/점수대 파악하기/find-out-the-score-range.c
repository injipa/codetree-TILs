#include <stdio.h>

int main() {

    int arr[100];
    int cnt[11]={0, };
    
    for(int i=0; i<100; i++){
        scanf("%d", &arr[i]);
        cnt[arr[i]/10]++;

        if(arr[i]==0)
        break;
    }

    for(int i=10; i>0; i--){
        printf("%d - %d\n", i*10, cnt[i]);
    }
    return 0;
}