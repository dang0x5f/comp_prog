#include <stdio.h>

// DNF

#define SZ 100
#define NFIBS 4

void solve(void)
{
    int a[NFIBS],uniq[SZ+1]={0},cnt=0;
    for(int i=0; i<NFIBS; ++i) scanf("%d",&a[i]);
    if(uniq[a[3]-a[2]]==0){
        uniq[a[3]-a[2]]=1;
        ++cnt;
    }
    if(uniq[a[2]-a[1]]==0){
        uniq[a[2]-a[1]]=1;
        ++cnt;
    }
    if(uniq[a[1]+a[0]]==0){
        uniq[a[1]+a[0]]=1;
        ++cnt;
    }
    printf("%d\n",cnt);
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();

    return(0);
}
