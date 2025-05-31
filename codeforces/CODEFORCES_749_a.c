#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int k;
    scanf("%d",&k)&&getchar();//\n
    int nprime = 0;
    bool isodd = false;
    if(k & 1){
        k -= 3;
        ++nprime;
        isodd = true;
    }
    if(k > 0) nprime += (k/2);
    printf("%d\n",nprime);
    if(isodd){
        printf("3 ");
        --nprime;
        for(int i = 0; i < nprime; ++i)
            printf("2 ");
        printf("\n");
    }else{
        for(int i = 0; i < nprime; ++i)
            printf("2 ");
        printf("\n");
    }

    return(0);
}
