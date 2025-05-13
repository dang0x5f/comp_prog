#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar(); // \n

    int i;
    int ith;
    int p[n];
    for(i = 1; i <= n; i++){
        scanf("%d", &ith) && getchar();
        p[ith-1] = i;
    }
    for(i = 0; i < n-1; i++){
        printf("%d ", p[i]);
    }
    printf("%d\n", p[i]);
    

    return(0);
}
