#include <stdio.h>
#include <limits.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    long long d;
    long long max = -1;
    long long min = LONG_MAX;
    do{
        scanf("%lld",&d);
        if(d > max)
            max = d;
        if(d < min)
            min = d;
    }while(getchar()!='\n');
    printf("%lld\n", max-min);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();
}
