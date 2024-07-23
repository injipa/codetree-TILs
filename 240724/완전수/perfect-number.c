#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    int cnt=0;;
   
  for(int i=a; i<=b; i++){
    int sum=0;
    for(int j=1; j<i; j++){
        if(i%j==0)
        sum+=j;
    }
    if(i==sum)
    cnt++;
  }
  printf("%d", cnt);

    return 0;
}