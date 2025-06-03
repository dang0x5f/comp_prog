#include <stdio.h>

void solve(void)
{
    int n, ans = 0;
    scanf("%d",&n)&&getchar();
    if(n/4 == 0){
        printf("1\n");
    }
    else{
        ans = n / 4;
        n %= 4;
        ans += n/2;
        printf("%d\n",ans);
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
