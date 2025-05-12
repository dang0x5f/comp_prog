#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int y;
    scanf("%d", &y);

    int n[10] = {0};
    int count = 0;
    while(true){
        y++;
        int y2 = y;
        for(int i = 0; i < 4; i++){
            if(n[y2 % 10] != 1){
                n[y2 % 10] = 1;
                count++;
            }
            y2 /= 10;
        }

        if(count == 4) break;

        count = 0;
        for(int i = 0; i < 10; i++)
            n[i] = 0;
    }

    printf("%d\n", y);

    return(0);
}
