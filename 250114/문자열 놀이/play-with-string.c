#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int n;

    scanf("%s", str);
    scanf("%d", &n);

    int len=strlen(str);


    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        if(a==1){
            int b, c;
            scanf("%d%d", &b, &c);
            char f, g;
            f=str[b-1];
            g=str[c-1];

            str[b-1]=g;
            str[c-1]=f;

            printf("%s\n", str);
        }
        if(a==2){
            char d, e;
            scanf(" %c %c", &d, &e);
            for(int i=0; i<len; i++){
                if(str[i]==d)
                str[i]=e;
            }
            printf("%s\n", str);

        }

    }
    return 0;
}