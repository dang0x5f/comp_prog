#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

void solve(void)
{
    int n, d, pd=-1,isperfect=1;
    scanf("%d",&n)&&getchar();
    do{
        scanf("%d",&d);
        if(isperfect && pd>=0){
            int diff=ABS(pd-d);
            isperfect=(diff!=5&&diff!=7?0:1);
        }
        pd=d;
    }while(getchar()!='\n');
    printf("%s\n",(isperfect?"YES":"NO"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
