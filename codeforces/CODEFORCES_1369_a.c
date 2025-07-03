#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    printf("%s\n",(n%4?"NO":"YES"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
