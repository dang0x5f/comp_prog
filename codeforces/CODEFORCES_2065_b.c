#include <stdio.h>

void solve(void)
{
    int c=0, prev=0, len=0, operable=0;

    while((c=getchar())!='\n'){
        ++len;
        if(c==prev)
            operable=1;
        prev=c;
    }
    printf("%d\n",(operable?1:len));
}

int main(void)
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
        solve();

    return(0);
}
