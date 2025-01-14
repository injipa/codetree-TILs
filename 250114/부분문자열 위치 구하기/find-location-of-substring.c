#include <stdio.h>
#include <string.h>

int main() {
    char str_1[1001];
    char str_2[1001];

    scanf("%s", str_1);
    scanf("%s", str_2);

    int len_1=strlen(str_1);
    int len_2=strlen(str_2);
    int index=-1;

    for(int i=0; i<len_1-len_2+1; i++){
        int match = 1;
        for (int j = 0; j < len_2; j++) {
            if (str_1[i + j] != str_2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            index = i;
            break;
        }
    }

    printf("%d", index);


    return 0;
}