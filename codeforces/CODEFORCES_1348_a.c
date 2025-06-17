#include <stdio.h>

#define ABS(a,b) (((a)-(b)<0)?(b)-(a):(a)-(b))

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int s1 = (1<<n), s2 = 0;
    for(int i=1; i<n/2; ++i)
        s1 += (1<<i);
    for(int i=n/2; i<n; ++i)
        s2 += (1<<i);
    printf("%d\n",ABS(s1,s2));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
