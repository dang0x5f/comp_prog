#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(void)
{
    FILE *i=freopen("cowjog.in", "r", stdin);
    FILE *o=freopen("cowjog.out", "w", stdout);

    int n;
    scanf("%d",&n)&&getchar();
    int p,spe[n];
    for(int i=0; i<n; ++i)
        scanf("%d %d",&p,&spe[i]);

    int ans=1;
    int slow=spe[n-1];
    for(int i=n-2; i>=0; --i){
        ans+=(spe[i]>slow?0:1);
        slow=MIN(slow,spe[i]);
    }
    printf("%d\n",ans);

    fclose(i);
    fclose(o);

    return(0);
}
