#include <stdio.h>

void solve(void)
{
    int n, a, b, t = 0;
    scanf("%d %d %d",&n, &a, &b)&&getchar();//\n
    if(a*2 < b){
        printf("%d\n",a*n);
    }else{
        if(n==1){
            printf("%d\n",a);
        }else{
            t += (n/2)*b;
            n %= 2;
            t += (n*a);
            printf("%d\n",t);
        }
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
