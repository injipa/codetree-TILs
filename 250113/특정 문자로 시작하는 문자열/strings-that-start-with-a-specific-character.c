#include <stdio.h>
#include <string.h>
int main() {
    int a;
    char str[21][21];
    char b;
    int cnt=0;
    int len=0;

    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%s", str[i]);
    }
    getchar();
    scanf("%c", &b);

    for(int i=0; i<a; i++){
        if(str[i][0]==b){
            cnt++;
            len+=strlen(str[i]);
        }
    }

    printf("%d %.2lf", cnt, (double)len/cnt);



    return 0;
}