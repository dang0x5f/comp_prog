#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int d, odd=0, sum=0;
    do{
        scanf("%d",&d);
        sum += d;
        if(d & 1) ++odd;
    }while(getchar()!='\n');
    if(sum & 1 || (odd >= 1 && odd != n))
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
