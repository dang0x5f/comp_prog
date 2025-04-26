#include <stdio.h>

int
main(void)
{
    long long num;

    scanf("%lld", &num);
    while(num != 1){
        printf("%lld ", num);
        if((num % 2) == 0){
            num >>= 1;
        }else{
            num = (num * 3) + 1;
        }
    }
    printf("%lld\n", num);

    return(0);
}
