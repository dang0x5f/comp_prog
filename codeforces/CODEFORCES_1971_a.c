#include <stdio.h>

int max(int v1, int v2)
{
    return(v1>v2?v1:v2);
}

int min(int v1, int v2)
{
    return(v1<v2?v1:v2);
}

void solve(void)
{
    int x, y;
    scanf("%d %d",&x,&y)&&getchar();
    printf("%d %d\n",min(x,y),max(x,y));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();
    return(0);
}
