#include <stdio.h>
#define MIN 60

void solve(void)
{
    int h, m;
    scanf("%d %d",&h,&m)&&getchar();//\n
    printf("%d\n", (((23*MIN)-(h*MIN))+(MIN-m)) );
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
