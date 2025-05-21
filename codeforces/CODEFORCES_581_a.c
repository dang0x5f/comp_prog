#include <stdio.h>
int main(void)
{
    int ab[2] = {0};
    do{
        scanf("%d",&ab[0]);
        if(ab[0] > ab[1]){
            int temp = ab[1];
            ab[1] = ab[0];
            ab[0] = temp;
        }
    }while(getchar()!='\n');
    printf("%d %d\n", ab[0], (ab[1]-ab[0])/2);
    return(0);
}
