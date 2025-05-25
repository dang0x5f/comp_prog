#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    n /= 2;
    if(n & 1){
        printf("NO\n");
        return;
    }
    
    printf("YES\n");
    for(int i = 1; i <= n; ++i)
        printf("%d ", i*2);
    for(int i = 1; i <  n; ++i)
        printf("%d ", i*2-1);
    printf("%d\n", 3*n-1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
