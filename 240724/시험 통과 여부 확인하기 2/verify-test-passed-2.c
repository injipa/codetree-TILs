#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt=0;


    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            int arr[4];
        scanf("%d", &arr[i]);
        sum+=arr[i];}

        if(sum/4>=60){
        printf("pass\n");
        cnt++;}
        else
        printf("fail\n");

        
    }
    printf("%d", cnt);
    return 0;
}