#include <stdio.h>

int min(int v1, int v2)
{
    if(v1 > v2)
        return(v1);
    else
        return(v2);
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    int cnt = 0, max = 0;
    do{
        if(getchar() == '0'){
            ++cnt;
        }else{
            max = min(cnt,max);
            cnt = 0;
        }
    }while(getchar()!='\n');

    printf("%d\n", min(cnt,max));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
