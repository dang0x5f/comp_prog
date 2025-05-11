#include <stdio.h>
#define SIZE 100

void cvt_lower(char s[])
{
    for(int i = 0; i < SIZE && s[i] != '\0'; i++){
        if(s[i] < 97)
            s[i] = s[i] + 32;
    }
}

void cvt_upper(char s[])
{
    for(int i = 0; i < SIZE && s[i] != '\0'; i++){
        if(s[i] >= 97)
            s[i] = s[i] - 32;
    }
}

int main(void)
{
    int idx = 0;
    int lc = 0, uc = 0;
    char s[SIZE+1] = {'\0'};

    while( (s[idx] = getchar()) != '\n'){
        if(s[idx] >= 97)
            lc++;
        else
            uc++;
        idx++;
    }
    s[idx] = '\0';

    if(lc >= uc) 
        cvt_lower(s);
    else
        cvt_upper(s);

    printf("%s\n", s);

    return(0);
}
