#include <stdio.h>
#define SZ 50

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int chk[SZ+1]={0}, perm[SZ]={0}, i=0, d;
    do{
        scanf("%d",&d);
        if(chk[d]==0){
            chk[d]=1;
            perm[i]=d;
            ++i;
        }
    }while(getchar()!='\n');

    int j;
    for(j=0; j<n-1; ++j)
        printf("%d ",perm[j]);
    printf("%d\n",perm[j]);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
