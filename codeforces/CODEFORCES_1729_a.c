#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c)&&getchar();

    int asec = a - 1;
    int bsec = (abs(c-b)+abs(c-1));

    int ans = 0;
    if(asec <= bsec)
        ans += 1;
    if(asec >= bsec)
        ans += 2;

    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
