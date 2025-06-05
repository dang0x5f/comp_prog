#include <stdio.h>
#include <math.h>

void solve(void)
{
    long long sum = 0, square_root;
    int n, d;
    scanf("%d",&n)&&getchar();//\n
    do{
        scanf("%d",&d);
        sum += d;
    }while(getchar()!='\n');
    square_root = (long long)sqrt((double)sum);
    printf("%s\n",(((square_root*square_root)==sum)?"YES":"NO"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
