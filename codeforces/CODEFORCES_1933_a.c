#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int sum = 0, d;
    do{
        scanf("%d",&d);
        sum += (d<0?-(d):d);
    }while(getchar()!='\n');
    printf("%d\n",sum);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
