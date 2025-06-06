#include <stdio.h>
#include <stdbool.h>

void solve(void)
{
    int n,k,d, prev = -1;
    bool is_sorted = true;
    scanf("%d %d",&n,&k)&&getchar();//\n
    do{
        scanf("%d",&d);
        if(d >= prev)
            prev = d;
        else
            is_sorted = false;
    }while(getchar()!='\n');
    if(is_sorted || k > 1)
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
