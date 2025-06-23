#include <stdio.h>

const char *pi = "3141592653589793238462643383279";

void solve(void)
{
    int c, err=0, i=0, cnt=0;
    while((c=getchar())!='\n'){
        if(err) continue;

        if(pi[i++]==c)
            ++cnt;
        else
            ++err;
    }
    printf("%d\n",cnt);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
