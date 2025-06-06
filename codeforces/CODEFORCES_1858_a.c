#include <stdio.h>

void solve(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c)&&getchar();//\n
    if(a==b){
        if(c&1) printf("First\n");
        else printf("Second\n");
        return;
    }

    if(a>b){
        printf("First\n");
    }else{
        printf("Second\n");
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
