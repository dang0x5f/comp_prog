#include <stdio.h>
#include <stdlib.h>

int compare(const void* v1, const void* v2)
{
    if(*(int*)v1 > *(int*)v2)
        return(-1);
    else
        return(1);
}

int main(void)
{
    int s[4];
    for(int i = 0; i < 4; i++)
        scanf("%d", &s[i]) && getchar();

    qsort(s,4,sizeof(s[0]),compare); 

    int cnt = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == s[i+1])
            cnt++;
    }
    printf("%d\n", cnt);

    return(0);
}
