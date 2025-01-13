#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char ans[10][1001];
    char tot[10011];

    for(int i=0; i<n; i++){
        scanf("%s", ans[i]);
    }

    int tot_index=0;
    for(int i=0; i<n; i++){
        int len=strlen(ans[i]);
        for(int j=0; j<len; j++){
            tot[tot_index]=ans[i][j];
            tot_index++;
        }
    }

    tot[tot_index]='\0';

    int len=strlen(tot);

    int index = 0;
    for (int i = 0; i < len / 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c", tot[index]);
            index++;
        }
        printf("\n");
    }

    // 나머지 출력
    if (len % 5 != 0) {
        for (int j = 0; j < len % 5; j++) {
            printf("%c", tot[index]);
            index++;
        }
        printf("\n");
    }

    return 0;
}