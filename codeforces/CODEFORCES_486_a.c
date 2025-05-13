#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%lld", &n);
    
    long long fn = 0;
    if(n%2 == 0)
        fn = n/2;
    else
        fn = (n-1)/2-n;
    printf("%lld\n", fn);

    return(0);
}
