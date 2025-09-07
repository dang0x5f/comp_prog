#include <stdio.h>

void solve(void)
{
    int n,k;
    scanf("%d %d", &n, &k);
    getchar();
    int n1 = n-(k-1);
    if(n1>0 && (n1%2) == 1){
        printf("YES\n");
        for(int i=0; i<k-1; ++i)
            printf("1 ");
        printf("%d\n",n1);
        return;
    }

    int n2 = n-2*(k-1);
    if(n2>0 && (n2%2) == 0){
        printf("YES\n");
        for(int i=0; i<k-1; ++i)
            printf("2 ");
        printf("%d\n",n2);
        return;
    }
    printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
        solve();
    return(0);
}
