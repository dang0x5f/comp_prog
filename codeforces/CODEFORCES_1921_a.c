#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

#define NSIDES 4

void solve(void)
{
    int x[NSIDES], y[NSIDES];
    for(int i=0; i<NSIDES; ++i)
        scanf("%d %d",&x[i],&y[i])&&getchar();
    int i;
    for(i=1; i<NSIDES; ++i){
        if(x[i] != x[0])
            break;
    }
    int side_len = MAX(x[0],x[i])-MIN(x[0],x[i]);
    printf("%d\n",side_len*side_len);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
