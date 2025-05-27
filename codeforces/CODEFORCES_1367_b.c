#include <stdio.h>

void solve(void)
{
    int n, d, a=0, b=0;
    scanf("%d",&n)&&getchar();//\n
    for(int i=0; i < n; ++i){
        scanf("%d", &d)&&getchar();//\s\n
        if(d % 2 != i % 2){
            if((i % 2) == 0)
                ++a;
            else
                ++b;
        } 
    }
    if(a!=b)
        printf("-1\n");
    else
        printf("%d\n",a);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
