#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char str[10][101];
    int len=0; 
    int count=0;

    scanf("%d",&a);

    for(int i=0; i<a; i++){
        scanf("%s", str[i]);
        len+=strlen(str[i]);
        if(str[i][0]=='a')
        count++;
        }

    printf("%d ", len);
    printf("%d", count);
    return 0;
}