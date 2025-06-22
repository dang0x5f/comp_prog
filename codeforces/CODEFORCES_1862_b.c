#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n],i=0,ei=0,pre=0;
    do{
        scanf("%d",&a[i]);
        if(i!=0 && a[i]<pre) ++ei;
        pre=a[i];
        ++i;
    }while(getchar()!='\n');

    printf("%d\n%d ",i+ei,a[0]);
    pre=a[0];
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
