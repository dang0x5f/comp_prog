#include <stdio.h>

void solve(void)
{
    int f3 = 0, l3 = 0, i = 0, d;
    while((d=getchar()) != '\n'){
        if(i++ < 3)
            f3 += (d-'0');
        else
            l3 += (d-'0');
    }
    if(f3 == l3)
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
