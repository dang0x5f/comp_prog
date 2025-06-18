#include <stdio.h>

void solve(void)
{
    int n=0, nb=0, c;
    while((c=getchar())!='\n'){
        if(c=='B') ++nb;
        ++n;
    }
    if(n-nb == nb)
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
