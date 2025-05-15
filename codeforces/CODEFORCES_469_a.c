#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar(); // \n

    int lvl_cnt = 0;
    int lvls[100+1] = {0};
    for(int xy = 0; xy < 2; xy++){
        int p;
        scanf("%d", &p);
        getchar(); // \s
        for(int i = 1; i <= p; i++){
            int a; 
            scanf("%d", &a);
            getchar(); // \s
            if(lvls[a] == 0){
                lvls[a] = 1;
                lvl_cnt++;
                if(lvl_cnt == n){
                    printf("I become the guy.\n");
                    return(0);
                }
            }
        }
    }
    if(lvl_cnt == n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    
    return(0);
}
