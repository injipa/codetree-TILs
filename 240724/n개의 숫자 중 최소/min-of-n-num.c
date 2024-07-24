#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int val_min=arr[0];
    int cnt=0;

    for(int i=0; i<n; i++){
        if(arr[i]<val_min){
        val_min=arr[i];}
    }

    for(int i=0; i<n; i++){
        if(arr[i]==val_min)
        cnt++;
    }

    printf("%d %d", val_min, cnt);
    return 0;
}