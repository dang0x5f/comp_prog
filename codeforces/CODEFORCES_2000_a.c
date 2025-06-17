#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    if((n>=102 && n<=109) || (n>=1010 && n<=1099))
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
