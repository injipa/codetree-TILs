#include <stdio.h>

int main() {

    int arr[10];
    
    int max_value=0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);


        if(arr[i]>max_value)
        max_value=arr[i];
    }

    printf("%d", max_value);

    return 0;
}