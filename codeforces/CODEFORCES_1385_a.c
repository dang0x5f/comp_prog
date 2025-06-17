#include <stdio.h>
#define SZ 3

void solve(void)
{
    int a[SZ]={0};
    do{
        scanf("%d",&a[0]);
        for(int i=0; i<SZ-1; ++i){
            if(a[i]>a[i+1]){
                a[i+1] += a[i];
                a[i] = a[i+1]-a[i];
                a[i+1] = a[i+1]-a[i];
            }
        }
    }while(getchar()!='\n');
    if(a[1]!=a[2]) printf("NO\n");
    else printf("YES\n%d %d %d\n",a[0],a[0],a[2]);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
