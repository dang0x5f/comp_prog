#include <stdio.h>
#define SZ 3

void solve(void)
{
    int ns[SZ]={0}, i=0;
    do{
        scanf("%d",&ns[i++]);
    }while(getchar()!='\n');//\n
    if(ns[0] >= ns[1])
        printf("NONE\n");
    else if(ns[1] > ns[2])
        printf("PEAK\n");
    else if(ns[1] < ns[2])
        printf("STAIR\n");
    else
        printf("NONE\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
