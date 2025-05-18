#include <stdio.h>
#define SZ 100

int main(void)
{
    int nch = 0;
    int chs[SZ] = {0};
    char ch;
    while( (ch=getchar()) != '\n' ){
        chs[(int)ch]++;
        nch++;
    }
    while( (ch=getchar()) != '\n' ){
        chs[(int)ch]++;
        nch++;
    }
    while( (ch=getchar()) != '\n' ){
        chs[(int)ch]--;
        nch--;
    }
    
    if(nch != 0){
        printf("NO\n");
        return(0);
    }

    int leftover = 0;
    for(int idx = 65; idx <= 90; ++idx){
        if(chs[idx] > 0)
            leftover += chs[idx];
    }

    if(leftover > 0){
        printf("NO\n");
        return(0);
    }

    printf("YES\n");

    return(0);
}
