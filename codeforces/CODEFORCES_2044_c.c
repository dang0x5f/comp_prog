#include <stdio.h>

void assign_seats(int m, int nrow, int *ans, int *empty)
{
    if(m>nrow){
        *ans += nrow;
        *empty += m-nrow;
    }else{
        *ans += m;
    }
}

void solve(void)
{
    int m,a,b,c;
    scanf("%d %d %d %d",&m,&a,&b,&c)&&getchar();

    int ans=0, empty=0;
    assign_seats(m,a,&ans,&empty);
    assign_seats(m,b,&ans,&empty);
    
    ans += (empty>c?c:empty);    

    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
