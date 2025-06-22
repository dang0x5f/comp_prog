#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n],i=0;
    do{
        scanf("%d",&a[i++]);
    }while(getchar()!='\n');

    for(int j=1; j<n; ++j){
        if(a[j]<a[j-1]) ++i;
    }

    printf("%d\n%d ",i,a[0]);
    int pre=a[0];
    for(int j=1; j<n; ){
        if(a[j]<pre){
            pre = a[j];
            printf("%d ",pre);
        }else{
            printf("%d ",a[j]);
            pre = a[j];
            ++j;
        }
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
