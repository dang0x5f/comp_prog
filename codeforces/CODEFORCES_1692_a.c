#include <stdio.h>

void solve(void)
{
    int ans = 0, a, bcd;
    scanf("%d",&a)&&getchar();//\s
    do{
        scanf("%d",&bcd);
        if(bcd > a) ans++;
    }while(getchar() != '\n');
    printf("%d\n", ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
