#include <stdio.h>

void solve(void)
{
    static int alpha[127] = {
        ['c'] = 1, ['o'] = 1, ['d'] = 1,
        ['e'] = 1, ['f'] = 1, ['r'] = 1,
        ['s'] = 1
    };

    char c;
    scanf("%c", &c)&&getchar();
    
    if(alpha[c] == 1)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
