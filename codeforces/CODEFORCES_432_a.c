#include <stdio.h>
#define SZ 6

int main(void)
{
    int n,k;
    scanf("%d %d",&n,&k)&&getchar();//\n
    
    int d;
    int ns[SZ] = {0};
    do{
        scanf("%d",&d);
        ++(ns[d]);
    }while(getchar()!='\n');

    int ans = 0;
    k = 5 - k;
    for(int i = 0; i <= k; ++i){
        ans += ns[i];
    }
    printf("%d\n", ans/3);

    return(0);
}
