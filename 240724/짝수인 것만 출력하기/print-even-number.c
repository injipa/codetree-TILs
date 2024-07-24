#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], arr2[n];
    int cnt=0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            arr2[cnt]=arr[i];
            cnt++;
        }
        }
    for(int i=0; i<cnt; i++)
    printf("%d ",arr2[i]);

    return 0;
}