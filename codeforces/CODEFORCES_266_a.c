#include <stdio.h>
#define SIZE 50

int main(void)
{
    int n;
    char curr_char;
    char last_char;
    int rmv_char = 0;

    // throw away
    scanf("%d", &n) && getchar();
    
    while( (curr_char = getchar()) != '\n' ){
        if(curr_char == last_char)
            rmv_char++;
        last_char = curr_char;
    }

    printf("%d\n", rmv_char);

    return(0);
}
