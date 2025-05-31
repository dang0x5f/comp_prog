#include <stdio.h>

void solve(void)
{
    int ans = 0;
    char c;
    while((c=getchar()) != '\n')
        if(c == 'A') ++ans;
    if(ans >= 3)
        printf("A\n");
    else
        printf("B\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
