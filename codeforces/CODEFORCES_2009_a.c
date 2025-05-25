#include <stdio.h>

void solve(void)
{
    int a, b;
    scanf("%d %d",&a,&b)&&getchar();
    printf("%d\n",b-a);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
