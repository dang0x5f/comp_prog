#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n*n];

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(i-1 < 0 && j-1 < 0){
                a[i*n+j] = 1;
            }else{
                a[i*n+j] = (i-1>=0?a[(i-1)*n+j]:0)+(j-1>=0?a[i*n+(j-1)]:0);
            }
            /* printf("%7d",a[i*n+j]); */
        }
        /* printf("\n"); */
    }
    printf("%d\n",a[n*n-1]);

    return(0);
}
