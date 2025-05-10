#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 100

int comp(const void *v1, const void *v2)
{
    if( *(int*)v1 > *(int*)v2)
        return(1);
    else
        return(-1);
}

int main(void)
{
    int c; 
    int idx = 0;
    int s[SIZE+1] = {0};
    
    while(true){
        scanf("%d", &s[idx]);
        c = getchar();
        if(c == '\n')
            break;
        idx++;
    }
    idx++; // missed out upperbounds idx, less magic number

    qsort(s, idx, sizeof(s[0]), comp); 

    int i;
    for(i = 0; i < idx-1; i++){
        printf("%d+", s[i]);
    }
    printf("%d\n", s[i]);
    
    return(0);
}
