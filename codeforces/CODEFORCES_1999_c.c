#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))

void solve(void)
{
    int n,s,m;
    scanf("%d %d %d",&n,&s,&m)&&getchar();
    int t=0,l,r,prev=0;
    for(int i=0; i<n; ++i){
        scanf("%d %d",&l,&r)&&getchar();
        t = MAX(l-prev,t);
        prev=r;
    }
    t = MAX(m-prev,t);
    printf("%s\n",(t>=s?"YES":"NO"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
