#include <stdio.h>

void solve(void)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d)&&getchar();
    printf("%d %d %d\n", b,c,c);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
