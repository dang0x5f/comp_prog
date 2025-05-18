#include <stdio.h>

#define RIGHT 1
#define LEFT  2

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m)&&getchar();
    int turn = RIGHT;    

    for(int r = 0; r < n; ++r){
        for(int c = 0; c < m; ++c){
            if(r%2 != 0){
                if(c == 0 && turn == LEFT)
                    printf("#");
                else if(c == m-1 && turn == RIGHT)
                    printf("#");
                else
                    printf(".");
            }else{
                printf("#");
            }
        }
        printf("\n");
        
        if(r%2){
            if(turn == RIGHT)
                turn = LEFT;
            else
                turn = RIGHT;
        }
    }

    return(0);
}
