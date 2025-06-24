#include <stdio.h>

void solve(void)
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b)&&getchar();
    if(a&1){
        printf("NO\n");
    }else{
        if(b%2==0){
            printf("YES\n");
        }else{
            if(a==0)
                printf("NO\n");
            else
                printf("YES\n");
        }
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
