#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    for(int i = 1; i <= w; i++)
        n -= k*i;    
    
    if(n >= 0){
        printf("0\n");
        return(0);
    }
    printf("%d\n", abs(n));

    return(0);
}
