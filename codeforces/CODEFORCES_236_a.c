#include <stdio.h>
#define SIZE 100

int main(void)
{
    int idx = 0;
    char s[SIZE+1] = {'\0'};
    int letters[128] = {0};
    int nletters = 0;
    
    while( (s[idx] = getchar()) != '\n' ){
        if(letters[s[idx]] == 0){
            letters[s[idx]] = 1;
            nletters++;
        }
        idx++;
    }
    
    if(nletters % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    
    return(0);
}
