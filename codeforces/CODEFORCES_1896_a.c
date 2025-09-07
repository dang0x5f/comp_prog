#include <stdio.h>

#define ABS(a,b) ( ((a)-(b)<0)?(b)-(a):(a)-(b) )
#define PERM_MAX 10

void solve(void)
{
    int n, i, perm[PERM_MAX] = {0};
    scanf("%d",&n);
    for(i=0; i<n; ++i)
        scanf("%d",&perm[i]);

    printf("%s\n",(perm[0]==1?"YES":"NO"));
}


int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();

    return(0);
}
