#include <stdio.h>

int main(void)
{
    int t,n;
    scanf("%d",&t)&&getchar();//\n
    while(t--){
        scanf("%d",&n)&&getchar();//\n
        printf("%d\n",(n==3?3:2));
    }

    return(0);
}
