#include <stdio.h>
#include <limits.h>

void solve(void)
{
    int a[3]={0},n;
    for(int i = 0; i < 3; ++i){
        scanf("%d",&a[0])&&getchar();//\s
        for(int j = 0; j < 3; ++j){
            if(a[j] > a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    scanf("%d",&n)&&getchar();//\n
    n -= 2 * a[2] - a[1] - a[0];
    if(n < 0 || n % 3 != 0)
        printf("NO\n");
    else
        printf("YES\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
