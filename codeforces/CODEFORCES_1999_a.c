#include <stdio.h>

void solve(void)
{
    char c1, c2;
    scanf("%c%c",&c1,&c2)&&getchar();
    printf("%d\n", (c1-'0')+(c2-'0'));
}

int main(void)
{
    int t;
    scanf("%d", &t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
