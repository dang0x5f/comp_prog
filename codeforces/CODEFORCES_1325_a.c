#include <stdio.h>

void solve(void)
{
    int x;
    scanf("%d",&x)&&getchar();
    printf("1 %d\n",x-1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
