#include <stdio.h>

int main(void)
{
    int t,x,y;
    scanf("%d",&t);

    do{
        scanf("%d",&x);
        y=10;
        while(x>0){
            if(x%10 < y)
                y = x%10;
            x /= 10;
        }
        printf("%d\n",y);
    }while(--t);

    return(0);
}
