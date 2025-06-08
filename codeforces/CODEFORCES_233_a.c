#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    if(n & 1){
        printf("-1\n");
        return(0);
    }

    int k = 0;
    while(k < n){
        k += 2;
        printf("%d %d ",k,k-1);
    }
    printf("\n");

    return(0);
}
