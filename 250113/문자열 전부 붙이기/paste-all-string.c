#include <stdio.h>
#include<string.h>
int main() {
    char str[10][101];
    char tot_str[1011];

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }

    int tot_index=0;
    for(int i=0; i<n; i++){
        int len=strlen(str[i]);
        for(int j=0; j<len; j++){
            tot_str[tot_index]=str[i][j];
            tot_index++;
        }
    }

    tot_str[tot_index]='\n';
    printf("%s", tot_str);


    return 0;
}