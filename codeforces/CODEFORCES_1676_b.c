#include <stdio.h>
#include <limits.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    int i=0,d,a[n],min=INT_MAX;
    do{
        scanf("%d",&a[i]);
        if(a[i]<min)
            min = a[i];
        ++i;
    }while(getchar()!='\n');
    int ans = 0;
    for(int j=0; j<n; ++j){
        if(a[j] == min){
            continue;
        }else{
            ans += a[j] - min;
        }
    }
    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
