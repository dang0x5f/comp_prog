#include <stdio.h>

void solve(void)
{
    int n,k;
    scanf("%d %d",&n,&k)&&getchar();
    int g=0, p=0, d;
    do{
        scanf("%d",&d);
        if(d==0&&g>0){
            --g;
            ++p;
        } else if(d>=k){
            g += d;
        }
    }while(getchar()!='\n');
    printf("%d\n",p);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
