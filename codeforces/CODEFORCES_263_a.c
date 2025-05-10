#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int x = 0, y = 0;

    int matrix[SIZE+1][SIZE+1]; 
    for(int i = 1; i <= SIZE; i++){
        for(int j = 1; j <= SIZE; j++){
            scanf("%d", &matrix[i][j]);
            getchar();
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            } 
        }
    }

    printf("%d\n",abs(3 - x) + abs(3 - y));

    /* printf("(%d,%d)\n",x,y); */
    /* for(int i = 1; i <= SIZE; i++){ */
    /*     printf("%d %d %d %d %d\n", */ 
    /*             matrix[i][1], matrix[i][2], */
    /*             matrix[i][3], matrix[i][4], */
    /*             matrix[i][5]); */
    /* } */

    return(0);
}
