#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int p[n];
    for(int i=0; i<n; ++i)
        p[i] = i+1;
    for(int i=1; i<n; ++i)
        printf("%d ",p[i]);
    printf("%d\n",p[0]);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
