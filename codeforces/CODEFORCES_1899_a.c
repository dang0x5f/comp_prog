#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    if(n%3)
        printf("First\n");
    else
        printf("Second\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
