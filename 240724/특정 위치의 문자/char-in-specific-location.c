#include <stdio.h>

int main() {
    char a[6]={'L','E','B','R','O','S'};

    int c;
    scanf(" %c", &c);

    int idx=-1;
    for(int i=0; i<6; i++){
        if(a[i]==c){
        idx=i;
        break;}
    }

    if(idx==-1)
    printf("None");
    else
    printf("%d", idx);

    return 0;
}