#include <stdio.h>

#define SIZE 10000

int main(void)
{
    int idx = 0;
    char str[SIZE+1] = {'\0'};
    
    while( (str[idx] = getchar()) != '\n' ){
        if(idx == 0 && str[idx] >= 97){
            str[idx] = str[idx] - 32;
        }
        idx++;
    }
    str[idx] = '\0';

    printf("%s\n", str);

    return(0);
}
