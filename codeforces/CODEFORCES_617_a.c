#include <stdio.h>

int main(void)
{
    int x;
    int steps = 0;

    scanf("%d", &x);
    while(x != 0){
        for(int i = 5; i >= 1; i--){
            if( (x-i) >= 0 ){
                steps++;
                x -= i;
                i = 0;
            }
        }
    }

    printf("%d\n", steps);
    
    return(0);
}
