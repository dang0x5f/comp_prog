#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main(void)
{
    /* FILE *i = freopen("data.in", "r", stdin); */
    /* FILE *o = freopen("data.out", "w", stdout); */
    FILE *i = freopen("paint.in", "r", stdin);
    FILE *o = freopen("paint.out", "w", stdout);

    int a,b;
    scanf("%d %d",&a,&b)&&getchar();
    int c,d;
    scanf("%d %d",&c,&d)&&getchar();

    int ans = 0;
    if(a>d || c>b){
        ans += (b-a)+(d-c);
    }else{
        ans += MAX(b,d) - MIN(a,c);
    }
    printf("%d\n",ans);

    fclose(i);    
    fclose(o);    

    return(0);
}
