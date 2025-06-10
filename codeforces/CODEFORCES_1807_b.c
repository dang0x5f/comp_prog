#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int d, odd_total=0, even_total=0;
    do{
        scanf("%d",&d);
        if(d & 1){
            odd_total += d;
        }else{
            even_total += d;
        }
    }while(getchar()!='\n');
    if(even_total > odd_total){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
