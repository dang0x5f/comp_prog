#include <stdio.h>

void solve(void)
{
    char c;
    c = getchar();putchar(c);
    c = getchar();putchar(c);
    while((c=getchar())!='\n'){
        c=getchar();putchar(c);
    }
    putchar('\n');
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();
    
    return(0);
}
