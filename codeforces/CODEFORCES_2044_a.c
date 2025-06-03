#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    printf("%d\n",n-1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
