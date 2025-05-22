#include <stdio.h>
#define SZ 3

void solve(void)
{
    int n[SZ] = {0};
    for(int i = 0; i < SZ; ++i)
        scanf("%d",&n[i])&&getchar();

    if(n[0]+n[1] == n[2])
        printf("+\n");
    else
        printf("-\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
