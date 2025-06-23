#include <stdio.h>

void solve(void)
{
    int n, d, sum=0;
    scanf("%d",&n)&&getchar();
    do{
        scanf("%d",&d);
        sum += d;
    }while(getchar()!='\n');
    printf("%d\n",(sum<n?1:sum-n));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
