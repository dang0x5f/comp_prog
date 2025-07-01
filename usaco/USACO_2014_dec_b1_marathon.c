#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ABS(x) (((x)<0)?-(x):(x))

int main(void)
{
    FILE *i = freopen("marathon.in", "r", stdin);
    FILE *o = freopen("marathon.out", "w", stdout);

    int n;
    scanf("%d",&n)&&getchar();

    int x[n],y[n];
    for(int i=0; i<n; ++i)
        scanf("%d %d", &x[i], &y[i])&&getchar();

    int t=0;
    for(int i=1; i<n; ++i)
        t += ABS(x[i]-x[i-1])+
             ABS(y[i]-y[i-1]);

    int l=0;
    for(int i=1; i<n-1; ++i){
        int noskip = ABS(x[i]-x[i-1])+
                     ABS(y[i]-y[i-1])+
                     ABS(x[i]-x[i+1])+
                     ABS(y[i]-y[i+1]);

        int skip = ABS(x[i-1]-x[i+1])+
                   ABS(y[i-1]-y[i+1]);

        l = MAX(l,noskip-skip);
    }
    printf("%d\n",t-l);

    fclose(i);
    fclose(o);

    return(0);
}
