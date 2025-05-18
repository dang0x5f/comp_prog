#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n

    int cnt = 0;
    int *s = malloc(sizeof(int)*5);
    
    int pow10 = 1;
    while(n>0){
        if(n%10 > 0){
            /* printf("%d ", (n%10) * pow10); */
            *(s+cnt) = (n%10)*pow10;
            cnt++;
        }
        
        /* n -= (n%10)*pow10; */
        n /= 10;
        pow10 *= 10;
    }
    printf("%d\n",cnt);
    for(int i = 0; i < cnt; ++i)
        printf("%d ", *(s+i));
    printf("\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    
    for(int test = 0; test < t; ++test)
        solve();

    return(0);
}
