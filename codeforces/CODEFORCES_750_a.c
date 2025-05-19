#include <stdio.h>
#define TIME_LIMIT ( (60*4) )

int main(void)
{
    int n, k;
    scanf("%d %d",&n,&k)&&getchar();//\n
    
    int ans = 0;
    k = TIME_LIMIT - k;
    for(int i = 1; i <= n; ++i){
        int p = i*5;
        if(k - p >= 0){
            k -= p;
            ans++;
        }else{
            break;
        }
    }
    printf("%d\n",ans);

    return(0);
}
