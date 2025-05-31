#include <stdio.h>

void solve(void)
{
    int n, k;
    scanf("%d %d",&n,&k)&&getchar();//\n
    int d, e = 0;
    do{
        scanf("%d",&d);
        if(d == k) ++e;
    }while(getchar()!='\n');
    if(e)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
