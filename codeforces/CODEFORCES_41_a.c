#include <stdio.h>
#define SIZE 100

int main(void)
{
    int idx;
    char s[SIZE+1] = {'\0'};
    char t[SIZE+1] = {'\0'};

    idx = 0;
    while( (s[idx] = getchar()) != '\n' && (idx < SIZE) )
        idx++;
    s[idx] = '\0';

    int len = idx;
    int end_idx = idx-1;

    idx = 0;
    while( (t[idx] = getchar()) != '\n' && (idx < SIZE) )
        idx++;
    t[idx] = '\0';

    /* length differ */
    if(idx != len){
        printf("NO\n");
        return(0);
    }

    idx = 0;
    while(idx < len){
        if(s[idx] != t[end_idx]){
            printf("NO\n");
            return(0);
        }
        idx++;
        end_idx--;
    }
    printf("YES\n");
    
    return(0);
}
