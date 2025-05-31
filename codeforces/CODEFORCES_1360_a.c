#include <stdio.h>

int max(int v1, int v2)
{
    return(v1>v2?v1:v2);
}

int min(int v1, int v2)
{
    return(v1<v2?v1:v2);
}

void solve(void)
{
    int a=0, b=0, ans=0;
    scanf("%d %d",&a,&b)&&getchar();//\n
    ans = min(max(a*2,b),max(a,b*2));
    printf("%d\n",ans*ans);
}

int main(void)
{
    int t=0;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
