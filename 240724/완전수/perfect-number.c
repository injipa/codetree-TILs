#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    int sum = 0;
    int cnt=0;;
   
  for(int i=a; i<=b; i++){
    for(int j=1; j<=i/2; j++){
        if(i%j==0)
        sum+=j;
    }
    if(i==sum)
    cnt++;
  }
  printf("%d", cnt);

    return 0;
}