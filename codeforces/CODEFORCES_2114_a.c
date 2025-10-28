#include <stdio.h>
#include <math.h>

void solve(void)
{
    char c;
    int year=0, sqr=0;

    scanf("%d", &year);
    
    sqr = ceil(sqrt(year));
    if(sqr*sqr == year)
        printf("0 %d\n", sqr);
    else
        printf("-1\n");
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
}
