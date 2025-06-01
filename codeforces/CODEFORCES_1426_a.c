#include <stdio.h>

void solve(void){
    int n,x,f=0;
    scanf("%d %d",&n,&x)&&getchar();
    if(n < 3){
        printf("1\n");
        return;
    }
    n -= 2;
    ++f;
    f += n/x;
    if(n%x > 0) ++f;
    printf("%d\n",f);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
