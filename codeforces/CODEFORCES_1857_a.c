#include <stdio.h>

void solve(void)
{
    int n,d;
    scanf("%d",&n)&&getchar();//\n
    int sum = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d",&d)&&getchar();
        sum += d;
    }
    if((sum%2) == 0)
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
