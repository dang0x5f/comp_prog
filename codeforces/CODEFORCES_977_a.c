#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    for(;k > 0; k--){
        if( (n%10) == 0 )
            n /= 10;
        else
            n -= 1;
    }

    printf("%d\n", n);

    return(0);
}
