#include <stdio.h>
#include <string.h>

void solve(void)
{
    int n, ans = -1;
    scanf("%d",&n)&&getchar();
    int a[n+1], d;
    memset(a,0,(n+1)*sizeof(a[0]));
    do{
        scanf("%d",&d);
        ++a[d];
        if(a[d] == 3) ans = d;
    }while(getchar()!='\n');
    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
