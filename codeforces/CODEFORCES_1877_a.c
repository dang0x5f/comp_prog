#include <stdio.h>

void solve()
{
    int n, d, pos=0, neg=0;
    scanf("%d",&n);
    --n;
    do{
        scanf("%d",&d);
        if(d > 0)
            pos += d;
        else
            neg += d;
        /* printf("  %d\n",d); */
    }while(--n);
    /* printf("%d - %d\n", pos, neg); */
    printf("%d\n",-(pos+neg));
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
}
