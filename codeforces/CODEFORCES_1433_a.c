#include <stdio.h>

void solve(void)
{
    int ans = 0;
    int a[] = {
        1,2,3,4, 1,2,3,4, 1,2,3,4, 
        1,2,3,4, 1,2,3,4, 1,2,3,4,
        1,2,3,4, 1,2,3,4, 1,2,3,4
    };
    int x, c = 0, x_len = 0, a_len = 0;
    while( (x=getchar()) != '\n' ){
        c = x;
        ++x_len;
    }
    a_len = ((c - '0') - 1) * 4;
    a_len += x_len;

    for(int i = 0; i < a_len; ++i)
        ans += a[i];

    printf("%d\n", ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
