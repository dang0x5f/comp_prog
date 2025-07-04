#include <stdio.h>

void solve(void)
{
    int a,b;
    scanf("%d %d",&a,&b)&&getchar();
    
    if(a==0)
        printf("1\n");
    else
        printf("%d\n",a+(b*2)+1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
