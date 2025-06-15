/* Afterword: 
*   n=1 - |a[i] - a[i+1]| not possible with 1 element
*   n=2 - sum has to equal m. so max valid element values 
*         has to be [0,m] or [m,0]. |m-0| or |0-m|.
*         this operation only occurs ONCE with 2 elements.
*   n>2 - sum has to equal m. so max valid element values
*         is still m value: [0,m,0,...]. meaning |0-m| AND
*         |m-0| operations BOTH occur (ie. 2m).
*         [m,0,0,...] is not valid as the value m is only
*         used in the singular |m-0| operation.
*/


#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

void solve(void)
{
    int n,m;
    scanf("%d %d",&n,&m)&&getchar();
    printf("%d\n",MIN(2,n-1)*m);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
