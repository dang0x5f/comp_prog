#include <stdio.h>
#define WORD_SZ 10

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int ans_idx = 0, idx = 0, a, b, b_best = -1;
    while(idx < n){
        scanf("%d %d",&a,&b)&&getchar();
        if(a <= WORD_SZ  && b > b_best){
            ans_idx = idx;
            b_best = b;
        }
        ++idx;
    }
    printf("%d\n", ans_idx + 1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
