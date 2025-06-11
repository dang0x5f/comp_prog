#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int b[n],l=0;
    do{
        scanf("%d",&b[l++]);
    }while(getchar()!='\n');
    
    int i,j,cnt;
    for(i=0,j=n-1,cnt=0; cnt<n; ++cnt){
        if(cnt & 1)
            printf("%d ",b[j--]);
        else
            printf("%d ",b[i++]);
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
