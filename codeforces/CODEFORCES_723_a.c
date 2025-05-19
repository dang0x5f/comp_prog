#include <stdio.h>
#define SZ 3

int main(void)
{
    int x[SZ] = {0};
    for(int i = 0; i < SZ; ++i){
        int xx;
        scanf("%d", &xx)&&getchar();//\s\n
        x[0] = xx;
        for(int j = 0; j < SZ-1; ++j){
            if(x[j] > x[j+1]){
                int temp = x[j+1];
                x[j+1] = x[j];
                x[j] = temp;
            }else{
                break;
            }
        }
    }
    printf("%d\n", (x[2]-x[1]) + (x[1]-x[0]));

    return(0);
}
