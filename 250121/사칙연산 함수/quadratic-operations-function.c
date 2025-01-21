#include <stdio.h>

int ans(int a, char c, int b){
    switch(c){
        case '+':
        return a+b;
        break;
        case '-':
        return  a-b;
        break;
        case '*':
        return  a*b;
        break;
        case '/':
        return a/b;
        break;
        default:
        return 0;
        break;
    }
    }


int main() {
    int n1, n2;
    char cal;
    scanf("%d %c%d", &n1, &cal,&n2);

    if(ans(n1,cal,n2)==0)
    printf("False");
    else
    printf("%d %c %d = %d", n1,cal,n2,ans(n1,cal,n2));


    return 0;
}