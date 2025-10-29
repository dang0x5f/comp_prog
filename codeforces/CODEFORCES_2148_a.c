#include <stdio.h>

void solve(void)
{
    int x, n;
    scanf("%d %d",&x,&n);
    printf("%d\n",(n&1?x:0));
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    
    return(0);
}
        
