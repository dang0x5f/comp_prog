#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%I64d", &n);
    
    long long lnums = 0;
    while(n > 10){
        /* printf("%lld\n", n); */
        int rnum = n % 10;
        n /= 10;
        if(rnum == 4 || rnum == 7)
            lnums++;
    }
    /* printf("%lld\n", n); */
    if(n == 4 || n == 7)
        lnums++;

    /* printf("\n%lld\n", lnums); */
    while(lnums > 10){
        int rnum = lnums % 10;
        lnums /= 10;
        if(rnum == 4 || rnum == 7){
            continue;
        }else{
            printf("NO\n");
            return(0);
        }
    }
    if(lnums == 4 || lnums == 7){
        printf("YES\n");
        return(0);
    }
    
    printf("NO\n");
    return(0);
}
