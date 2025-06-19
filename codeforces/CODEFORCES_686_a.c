#include <stdio.h>

void solve(long long *x, long long *k)
{
    char c;
    long long d;
    scanf("%c %lld",&c,&d)&&getchar();
    switch(c){
        case'-':
            *k+=((*x)-d<0?1:0);
            *x-=((*x)-d<0?0:d);
            break;
        case'+':
            *x+=d;
            break;
    }
}

int main(void)
{
    long long n,x,k=0;
    scanf("%lld %lld",&n,&x)&&getchar();
    while(n--)
        solve(&x,&k);
    printf("%lld %lld\n",x,k);

    return(0);
}
