#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--){
        int n;
        scanf("%d",&n)&&getchar();
        printf("%d\n", n/2);
    }

    return(0);
}
