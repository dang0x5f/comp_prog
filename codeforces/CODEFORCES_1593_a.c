#include <stdio.h>
#define SZ 3
#define MAX(v1,v2) ((v1)>(v2)?(v1):(v2))

void solve(void)
{
    int a[SZ],i=0;
    do{
        scanf("%d",&a[i++]);
    }while(getchar()!='\n');
    int max = MAX( MAX(a[0],a[1]) , a[2] );    
    int max_cnt=0;
    for(int j=0; j<SZ; ++j)
        if(max==a[j]) ++max_cnt;

    if(max_cnt>=2){
        printf("%d %d %d\n",max-a[0]+1,max-a[1]+1,max-a[2]+1);
        return;
    }

    for(int j=0; j<SZ; ++j){
        printf("%d ", (a[j]==max?0:max-a[j]+1) );
    }
    printf("\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
