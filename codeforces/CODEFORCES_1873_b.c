#include <stdio.h>
#include <limits.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    int a[n], i = 0;
    int min = INT_MAX, mini = INT_MAX;
    do{
        scanf("%d",&a[i++]);
        if(a[i-1] < min){
            mini = i-1;
            min = a[i-1];
        } 
    }while(getchar()!='\n');
    ++(a[mini]);
    int ans = 1;
    while(--i >= 0)
        ans *= a[i];
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
