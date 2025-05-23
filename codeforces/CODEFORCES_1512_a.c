#include <stdio.h>
#include <stdlib.h>

int compare(const void* v1, const void* v2)
{
    if(*(int*)v1 > *(int*)v2)
        return(-1);
    else
        return(1);
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n

    int ns[n];
    int ns2[n];
    for(int i = 0; i < n; ++i){
        scanf("%d",&ns[i])&&getchar();//\s\n
        ns2[i] = ns[i];
    }
    
    qsort(ns2,n,sizeof(ns[0]),compare);
    for(int i = 0; i < n; ++i){
        if(ns[i] != ns2[1]){
            printf("%d\n",i+1);
            return;
        }
    }     

}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
