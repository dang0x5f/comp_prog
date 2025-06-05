#include <stdio.h>

void solve(void)
{
    int n, d, o = 0;
    scanf("%d",&n)&&getchar();//\n
    do{
        scanf("%d", &d);
        if(d & 1) ++o;
    }while(getchar()!='\n');
    printf("%s\n",((n==o)?"Yes":"No"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
