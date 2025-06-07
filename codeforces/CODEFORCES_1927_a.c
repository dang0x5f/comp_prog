#include <stdio.h>
#define SZ 10

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[SZ], i=0, idx=0, c;
    while((c=getchar()) != '\n'){
        if(c=='B') a[idx++] = i;
        ++i;
    }

    switch(idx){
        case 0: 
            printf("0\n"); 
            break;
        case 1: 
            printf("1\n"); 
            break;
        default:
            printf("%d\n",a[idx-1]-a[0]+1); 
            break;
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
