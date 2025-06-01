#include <stdio.h>

int main(void)
{
    int nrow,ncol;
    scanf("%d %d",&nrow,&ncol)&&getchar();//\n
    for(int r = 0; r < nrow; ++r){
        for(int c = 0; c < ncol; ++c){
            char color;
            scanf("%c",&color)&&getchar();
            if(color != 'W' && color != 'B' && color != 'G'){
                printf("#Color\n");
                return(0);
            }
        }
    }
    printf("#Black&White\n");
    return(0);
}
