#include <stdio.h>

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m)&&getchar();
    int count=0;
    for(int a=0; a*a<=n && a<=m; ++a){
        int b = n - a*a;
        if(a+b*b == m) ++count;
    }
    printf("%d\n",count);

    return(0);
}
