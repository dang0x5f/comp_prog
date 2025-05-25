#include <stdio.h>

int main(void)
{
    int a[5] = {0};
    for(int i = 1; i <= 4; ++i)
        scanf("%d",&a[i])&&getchar();//\s\n
    
    char c;
    long long cal = 0;
    while((c=getchar())!='\n')
        cal += a[c-'0'];
    printf("%lld\n",cal);

    return(0);
}
