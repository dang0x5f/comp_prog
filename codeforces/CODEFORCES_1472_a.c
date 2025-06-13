#include <stdio.h>

int div_paper(int area)
{
    if(area & 1) return(1);
    return(2*div_paper(area /= 2));
}

void solve(void)
{
    int w,h,n,t=1;
    scanf("%d %d %d",&w,&h,&n)&&getchar();
    t = div_paper(w*h);
    printf("%s\n",((t>=n)?"YES":"NO"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
