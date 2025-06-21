#include <stdio.h>

void solve(void)
{
    int x,k;
    scanf("%d %d",&x,&k)&&getchar();
    if(x%k != 0){
        printf("1\n%d\n",x);
    }else{
        printf("2\n%d %d\n",1,x-1);
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
