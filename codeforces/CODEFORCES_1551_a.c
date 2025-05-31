#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    int n1, n2;
    n2 = n / 3;
    n1 = n - (n2*2);
    if(abs(n1 - n2) == 2){
        n1 -= 2;
        ++n2;
    }
    printf("%d %d\n", n1, n2);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();
}
