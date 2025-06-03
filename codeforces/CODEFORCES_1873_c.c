#include <stdio.h>
#define SZ 10

int min(int v1, int v2)
{
    return(v1<v2?v1:v2);
}

void solve(void)
{
    int ans = 0;
    char c;
    for(int row = 1; row <= SZ; ++row){
        for(int col = 1; col <= SZ; ++col){
            scanf("%c",&c);
            if(c == 'X') 
                ans += min(min(row,col),min(11-row,11-col));
        }
        getchar();//\n
    }
    printf("%d\n", ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();
    return(0);
}
