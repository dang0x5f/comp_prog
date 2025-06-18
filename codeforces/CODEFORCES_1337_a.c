/* Afterword: */
/*   cannot be: b c d because if b=1 c=2 d=3 then */
/*   b+c == d , which cannot be the case. b+c should */
/*   be greater than d, the largest value. */

#include <stdio.h>

void solve(void)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d)&&getchar();
    printf("%d %d %d\n", b,c,c);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
