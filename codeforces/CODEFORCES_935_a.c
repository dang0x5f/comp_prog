#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int ans = 0;
    for(int i=1; i<=n/2; ++i){
        if((n-i)%i == 0) ++ans;
    }
    printf("%d\n",ans);

    return(0);
}
