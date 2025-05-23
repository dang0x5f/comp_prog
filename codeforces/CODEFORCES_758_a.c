#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n

    int d;
    int w = 0, max = -1; 
    do{
        scanf("%d",&d);
        if(d > max) max = d;
        w += d;
    }while(getchar()!='\n');
    printf("%d\n", (n*max) - w);

    return(0);
}
