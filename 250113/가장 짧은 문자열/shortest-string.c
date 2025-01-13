#include <stdio.h>
#include <string.h>

int main() {
    char a1[21];
    char a2[21];
    char a3[21];

   
    scanf("%s", a1);
    scanf("%s", a2);
    scanf("%s", a3);

    int a[3];
    a[0]=strlen(a1);
    a[1]=strlen(a2);
    a[2]=strlen(a3);

    int min=21;
    int max=-1;

    for(int i=0; i<3; i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }

    printf("%d", max-min);

    return 0;
}