#include <stdio.h>

void solve(void)
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n)&&getchar();
    int ops = 0;
    while(a <= n && b <= n){
        if(a<b)
            a += b;
        else
            b += a;
        ++ops;
    }
    printf("%d\n",ops);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
