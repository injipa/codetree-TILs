#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<=9; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(arr[j]==i)
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}