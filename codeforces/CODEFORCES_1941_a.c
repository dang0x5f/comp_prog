#include <stdio.h>

void solve(void)
{
    int n,m,k, ans=0;
    scanf("%d %d %d",&n,&m,&k)&&getchar();
    int l[n];
    for(int i=0; i<n; ++i)
        scanf("%d",&l[i])&&getchar();
    int r[m];
    for(int i=0; i<m; ++i)
        scanf("%d",&r[i])&&getchar();
    
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(l[i]+r[j] <= k) ++ans;
        }
    }
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
