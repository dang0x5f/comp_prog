#include <stdio.h>

int main(void)
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    printf("%s\n",(m-n>=0&&k-n>=0?"Yes":"No"));

    return(0);
}
