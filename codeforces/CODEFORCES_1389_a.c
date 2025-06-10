#include <stdio.h>

void solve(void)
{
    long long l, r;
    scanf("%lld %lld",&l,&r)&&getchar();
    if(l*2>r)
        printf("-1 -1\n");
    else
        printf("%lld %lld\n",l,l*2);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
