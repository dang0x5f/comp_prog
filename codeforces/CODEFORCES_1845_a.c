#include <stdio.h>
#include <math.h>

void solve(void)
{
    int n,k,x;
    scanf("%d %d %d",&n,&k,&x);

    if(x != 1){
        printf("YES\n%d\n",n);
        for(int i=0; i<n; ++i)
            printf("1 ");
        printf("\n");
    }else if(k == 1 || (k == 2 && n & 1)){
        printf("NO\n");
    }else{
        printf("YES\n");
        printf("%d\n", n/2);
        printf("%d ", (n&1?3:2));
        for(int i=0; i<(n/2)-1; ++i)
            printf("2 ");
        printf("\n");
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
