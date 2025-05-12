#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int p[n];
    int q[n];
    int r = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &p[i], &q[i]);
        getchar(); // \n
        
        if( (q[i] - p[i]) >= 2)
            r++;
    }
    printf("%d\n", r);

    return(0);
}
