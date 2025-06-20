#include <stdio.h>

void solve(void)
{
    char c;
    while( (c=getchar()) > 32 ){
        printf("%c",c);
        while( (c=getchar()) > 32 ) ;
        if(c=='\n')break;
    }
    printf("\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
