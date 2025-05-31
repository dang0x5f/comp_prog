#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    char c[n];
    for(int i = 0; i < n; ++i)
        scanf("%c",&c[i]);
    getchar();//\n

    int l=0, r=n-1, a=0;
    for(int j = 0; j < n/2; ++j){
        if( (c[l] == '0' && c[r] == '1') || 
            (c[l] == '1' && c[r] == '0') ){
            ++l;
            --r;
            a += 2;
        }else{
            break;
        }
    }
    printf("%d\n", n-a);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();
}
