#include <stdio.h>
#define DIE 6

int main(void)
{
    int d;
    int yw = 0;
    do{
        scanf("%d",&d);
        yw = (d > yw)?d:yw;
    }while(getchar()!='\n');
    
    int p = (DIE - yw) + 1;
    if(p == DIE){
        printf("1/1\n");
    }else if(p%2==0){
        printf("%d/%d\n",p/2,DIE/2);
    }else if(p%3==0){
        printf("%d/%d\n",p/3,DIE/3);
    }else{
        printf("%d/%d\n",p,DIE);
    }

    return(0);
}
