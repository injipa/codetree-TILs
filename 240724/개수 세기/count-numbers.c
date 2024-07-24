#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    int cnt=0;

    for(int i=0; i<a; i++){
        int c[10];
        scanf("%d", &c[i]);

        if(c[i]==b){
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}