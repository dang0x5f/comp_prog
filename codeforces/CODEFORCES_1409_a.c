#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int ans = 0;
    int a, b;
    scanf("%d %d",&a, &b)&&getchar();//\n
    int k = abs(b-a);
    ans += k / 10;
    if(k%10 > 0)
        ans++;
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
