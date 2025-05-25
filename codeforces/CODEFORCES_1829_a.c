#include <stdio.h>

void solve(void)
{
    char s[] = {
        'c','o','d','e','f',
        'o','r','c','e','s'
    };
    int i = 0, e = 0;
    char c;
    while((c=getchar())!='\n')
        if(s[i++] != c) ++e;
    printf("%d\n",e);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
