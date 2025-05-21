#include <stdio.h>
#define SZ 4

int main(void)
{
    int xs[4] = {0};
    do{
        scanf("%d", &xs[0]);
        for(int i = 0; i < SZ-1; ++i){
            if(xs[i] > xs[i+1]){
                int temp = xs[i+1];
                xs[i+1] = xs[i];
                xs[i] = temp;
            }
        }
    }while(getchar() != '\n');
    printf("%d %d %d\n", xs[3]-xs[2],xs[3]-xs[1],xs[3]-xs[0]);
    return(0);
}
