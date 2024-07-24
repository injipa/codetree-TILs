#include <stdio.h>

int main() {

    char s[3];
    int t[3];
    int cnt[5]={0,};
    

    for(int i=0; i<3; i++){
        scanf("%c %d\n", &s[i],&t[i]);

        if(s[i]=='Y'&&t[i]>=37)
        cnt[1]++;
        else if(s[i]=='N'&&t[i]>=37)
        cnt[2]++;
        else if(s[i]=='Y'&&t[i]<37)
        cnt[3]++;
        else if(s[i]=='N'&&t[i]<37)
        cnt[4]++;
    }

    

    printf("%d %d %d %d ", cnt[1],cnt[2],cnt[3],cnt[4]); 

    if(cnt[1]>=2)
    printf("E");
    
    return 0;
}