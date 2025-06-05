#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--){
        int n;
        scanf("%d",&n)&&getchar();//\n
        if(n & 1) ++n;
        printf("%d\n",n/2);
    }

    return(0);
}
