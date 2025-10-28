#include <stdio.h>

// DNF

#define SZ 100
#define NFIBS 4

#define ARRSIZE 5
#define MAX(a,b) ((a)>(b)?(a):(b))

void solve(void)
{
    int a[ARRSIZE], count=0, max=0;
    for(int i=0; i<ARRSIZE; ++i){
        if(i==2)
            continue;
        else
            scanf("%d",&a[i]);
    }

    a[2] = a[4]-a[3];
    for(int i=0; i<3; ++i)
        if(a[i+2]==(a[i+1]+a[i]))
            ++count;    
    max = MAX(max,count);

    count=0;
    a[2] = a[3]-a[1];
    for(int i=0; i<3; ++i)
        if(a[i+2]==(a[i+1]+a[i]))
            ++count;
    max = MAX(max,count);
    
    count=0;
    a[2] = a[0]+a[1];
    for(int i=0; i<3; ++i)
        if(a[i+2]==(a[i+1]+a[i]))
            ++count;
    max = MAX(max,count);
    
    printf("%d\n",max);
}

void solve2(void)
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
