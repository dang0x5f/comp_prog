#include <stdio.h>
#include <limits.h>

int get_num_ops(int diff)
{
    return((diff<0?1:1+get_num_ops(diff-2)));
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n], i=0, diff=INT_MAX;
    do{
        scanf("%d",&a[i]);
        if(i>0)
            diff = (a[i]-a[i-1]<diff?a[i]-a[i-1]:diff);
        ++i;
    }while(getchar()!='\n');
    printf("%d\n",(diff<0?0:get_num_ops(diff-2)));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
