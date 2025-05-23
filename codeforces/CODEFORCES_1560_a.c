#include <stdio.h>

void solve(void)
{
    int k;
    scanf("%d",&k)&&getchar();//\n
    
    int n = 0, e = 0;
    while(e < k){
        ++n;
        if(n%3 == 0 || n%10 == 3){
            continue;
        }else{
            ++e;
        }
    }
    printf("%d\n",n);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
