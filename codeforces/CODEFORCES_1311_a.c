#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int a,b;
    scanf("%d %d",&a,&b)&&getchar();
    int diff = abs(a-b);
    if(a>b){
        if(diff & 1) printf("2\n");
        else printf("1\n");
    }else if(a<b){
        if(diff & 1) printf("1\n");
        else printf("2\n");
    }else{
        printf("0\n");
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
