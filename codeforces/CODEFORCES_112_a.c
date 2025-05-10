/* 32 is the difference of lowercase ascii from uppercase */
/* ie 65 = A , 97 = a , 97-65=32 */

/* converting all to uppercase on input */
/* strcmp() outputs negative values other than just -1 */

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void)
{
    int idx;
    char s1[SIZE+1] = {'\0'};
    char s2[SIZE+1] = {'\0'};
    
    idx = 0; 
    while( (s1[idx] = getchar()) != '\n'){
        if((int)s1[idx] >= 97)
            s1[idx] = s1[idx] - 32;
        idx++;
    }
    s1[idx] = '\0';

    idx = 0; 
    while( (s2[idx] = getchar()) != '\n'){
        if((int)s2[idx] >= 97)
            s2[idx] = s2[idx] - 32;
        idx++;
    }
    s2[idx] = '\0';

    int comp = strcmp(s1, s2);
    if(comp < 0)
        comp = -1;
    printf("%d\n", comp);

    return(0);
}
