#include <stdio.h>

void solve(void)
{
    int r;
    scanf("%d",&r)&&getchar();//\n
    if(r >= 1900)
        printf("Division 1\n");
    else if(r >= 1600)
        printf("Division 2\n");
    else if(r >= 1400)
        printf("Division 3\n");
    else
        printf("Division 4\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
