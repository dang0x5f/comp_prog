#include <stdio.h>

void solve(void)
{
    int x,y,n,k;
    scanf("%d %d %d",&x,&y,&n)&&getchar();//\n
    if(n - n % x + y <= n)
        printf("%d\n", n - n % x + y);
    else
        printf("%d\n", n - n % x - (x - y));
}

int main(void)
{
    int t;
    scanf("%d", &t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
