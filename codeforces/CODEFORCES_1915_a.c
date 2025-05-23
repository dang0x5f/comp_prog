#include <stdio.h>

void solve(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c)&&getchar();//\n
    printf("%d\n", (a^b^c));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();
}
