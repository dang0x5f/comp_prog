#include <stdio.h>
#include <stdbool.h>
#define SIZE 4
#define SIZE2 100000

int main(void)
{
    int d;
    int klmn[SIZE] = {0};
    bool finished = false;
    for(int i = 0; i < SIZE; ++i){
        scanf("%d",&klmn[i]) && getchar(); // \n
        if(klmn[i] == 1){
            finished = true;
        }
    }
    scanf("%d", &d) && getchar(); // \n

    if(finished){
        printf("%d\n",d);
        return(0);
    }
    
    int dragons[SIZE2+1] = {0};
    int ndragons = 0;
    for(int i = 0; i < SIZE; ++i){
        int m = klmn[i];
        do{
            if(dragons[m] == 0 && m <= d){
                dragons[m] = 1;
                ndragons++;
            }
            m += klmn[i];
        }while(m <= d);
    }
    printf("%d\n", ndragons);

    return(0);
}
