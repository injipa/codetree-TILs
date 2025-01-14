#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char a[21];

    scanf("%s", a);

    int len_a=strlen(a);
    bool exist=false;

    for(int i=0; i<len_a-1; i++){
        if(a[i]=='e'&&a[i+1]=='e'){
            exist=true;
        }
    }

    if(exist == true) printf("Yes ");
	else printf("No ");

    exist=false;

    for(int i=0; i<len_a-1; i++){
        if(a[i]=='a'&&a[i+1]=='b'){
            exist=true;
        }
    }

    if(exist == true) printf("Yes");
	else printf("No");



    return 0;
}