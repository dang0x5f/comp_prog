#include <stdio.h>

void solve(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c)&&getchar();
    if(a<b){
        a = a+b;
        b = a-b;
        a = a-b;
    }
    int nmoves=0;
    while(a > b){
        if(a-b < c){
            ++nmoves;
            break;
        }
        a -= c;
        b += c;
        ++nmoves;
    }
    printf("%d\n",nmoves);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
