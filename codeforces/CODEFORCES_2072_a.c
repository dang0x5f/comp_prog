#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

void solve(void)
{
    int n, k, p, c;
    scanf("%d %d %d", &n, &k, &p);

    k = ABS(k);
    if( (c=k/p) <= n ){
        if(k%p > 0) ++c;
        if(c > n)
            printf("-1\n");
        else
            printf("%d\n",c);
    }else{
        printf("-1\n");
    }
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    
    return(0);
}
