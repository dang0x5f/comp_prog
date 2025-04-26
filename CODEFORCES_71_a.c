#include <stdio.h>

#define MAX_LEN 100

int
main(void)
{
    int c, i, len;
    int num_cases;
    char buffer[MAX_LEN];

    scanf("%d\n", &num_cases);
    
    for(int j = 0; j < num_cases; j++){
        
        i = 0;
        while( (c = getc(stdin)) > 32){
            buffer[i] = c;
            i++;
        }
        buffer[i] = '\0';
        len = i;

        if(len <= 10)
            printf("%s\n", buffer);
        else{
            printf("%c%d%c\n", buffer[0], len - 2, buffer[len - 1]);
        }
    }

    return(0);
}
