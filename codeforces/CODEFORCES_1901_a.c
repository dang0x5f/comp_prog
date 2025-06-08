#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
void solve(void)
{
    int n,x;
    scanf("%d %d",&n,&x)&&getchar();
    int ns[n+1];
    ns[n] = x;
    for(int i=0; i<n; ++i)
        scanf("%d",&ns[i])&&getchar();
    int min_liter = ns[0], dst;
    for(int i=1; i<=n; ++i){
        if(i == n){
            dst = (ns[i]-ns[i-1])*2;
        }else{
            dst = (ns[i]-ns[i-1]);
        }
        min_liter = MAX(min_liter,dst);
    }
    printf("%d\n",min_liter);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
