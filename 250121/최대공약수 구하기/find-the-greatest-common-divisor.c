#include <stdio.h>

void min(int a, int b){
      int index=1;
      for(int i=1; i<=(a<b?a:b); i++){
        if(a%i==0&&b%i==0){
            index=i;
        }
      }
      printf("%d", index);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    
    min(n, m);

return 0;
}