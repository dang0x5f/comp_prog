#include <stdio.h>

int main(void)
{
    int n, h;
    scanf("%d %d", &n, &h);
    getchar(); // \n
    
    int ai;
    int width = 0;
    for(; n > 0; n--){
        scanf("%d", &ai);
        getchar(); // \s

        if(ai > h)
            width += 2;
        else
            width++;
    }
    printf("%d\n", width);
    
    return(0);
}
