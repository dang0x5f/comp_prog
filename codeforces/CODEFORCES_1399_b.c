#include <stdio.h>
#include <limits.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

void solve(void)
{
    int min_a = INT_MAX, min_b = INT_MAX;
    int n;
    scanf("%d",&n)&&getchar();
    int a[n];
    for(int i=0; i<n; ++i){
        scanf("%d",&a[i])&&getchar();
        if(a[i]<min_a) min_a = a[i];
    }
    int b[n];
    for(int i=0; i<n; ++i){
        scanf("%d",&b[i])&&getchar();
        if(b[i]<min_b) min_b = b[i];
    }
    
    long long ans = 0;
    for(int i=0; i<n; ++i){
        ans += MAX(a[i]-min_a,b[i]-min_b);
    }
    printf("%lld\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();
    
    return(0);
}
