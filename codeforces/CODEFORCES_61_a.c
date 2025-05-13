#include <stdio.h>
#define SIZE 100

int main(void)
{
    int i;
    char s[SIZE+1] = {'\0'};
    for(i = 0; i < SIZE+1; i++){
        scanf("%c", &s[i]);
        if(s[i] == '\n') break;
    } 
    s[i] = '\0';
    
    char c;
    int len = i;
    for(i = 0; i < len; i++){
        scanf("%c", &c);
        if(s[i] != c)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    
    return(0);
}
