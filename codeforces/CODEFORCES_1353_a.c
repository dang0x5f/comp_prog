#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

void solve(void)
{
    int n,m;
    scanf("%d %d",&n,&m)&&getchar();
    printf("%d\n",MIN(2,n-1)*m);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
