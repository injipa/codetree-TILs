#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[101];

    char str[101][101];
    int num[101];

    scanf("%d", &n);
    scanf("%s", a);

    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }

    for(int i=0; i<n; i++){
        num[i]=strcmp(a, str[i]);
    }

    int index=0;
    for(int i=0; i<n; i++){
        if(num[i]==0){
            index++;
        }
    }

    printf("%d", index);


    

    return 0;
}