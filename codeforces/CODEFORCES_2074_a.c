#include <stdio.h>

void solve(void)
{
    int l,r,d,u;
    scanf("%d %d %d %d",&l,&r,&d,&u)&&getchar();
    printf("%s\n",((u==d && r==l && u==r)?"Yes":"No"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
