#include <stdio.h>

int main(void)
{
    char c;
    while((c=getchar()) != '\n'){
        if(c=='.'){
            printf("0");
        }else{
            c=getchar();
            if(c=='\n')
                break;
            if(c=='.')
                printf("1");
            else
                printf("2");
        }
    }
    printf("\n");

    return(0);
}
