#include <stdio.h>
#define SZ 7

void solve(void)
{
    int n,m,ans=0;
    scanf("%d %d",&n,&m)&&getchar();
    int a[SZ] = {0}, c;
    while((c=getchar())!='\n') 
        ++a[c-'A'];
    for(int i=0; i<SZ; ++i)
        ans += (((a[i]-m)<0)?-(a[i]-m):0);
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
