#include <stdio.h>

void solve(void)
{
    int n, ans = 0;
    scanf("%d",&n)&&getchar();//\n
    for(int i = 1; i <= n; i = i * 10 + 1){
        for(int j = 1; j <= 9; ++j){
            if(i*j <= n)
                ++ans;
        }
    }
    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
