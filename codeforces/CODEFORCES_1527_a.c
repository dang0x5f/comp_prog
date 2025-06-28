#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int last=0;
    for(int i=0; i<30; ++i){
        if(((n>>i)&1)==1){
            last = i;
        }
    }
    printf("%d\n",(1<<last)-1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
