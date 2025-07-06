#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

void solve(void)
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int n = 2 * ABS(A-B);
    if(A > n || B > n || C > n){
        printf("-1\n");
    }else{
        int d = n/2 +C;
        while(d > n) 
            d-=n;
        printf("%d\n", d);
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
