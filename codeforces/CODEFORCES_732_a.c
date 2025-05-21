#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int k, r;
    scanf("%d %d",&k,&r)&&getchar();//\n
    
    int ans = 0;
    int accum = k;
    while(true){
        if(accum%10 == 0 || accum%10 == r){
            ans++;
            break;
        }
        ans++;
        accum += k;
    }    
    printf("%d\n",ans);

    return(0);
}
