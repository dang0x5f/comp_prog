#include <stdio.h>
#include <stdbool.h>

void solve(void)
{
    bool pass_candy = false;
    int c, n, x = 0, y = 0;
    scanf("%d",&n)&&getchar();//\n
    while((c=getchar())!='\n'){
        switch(c){
            case 'U': ++y; break;
            case 'D': --y; break;
            case 'L': --x; break;
            case 'R': ++x; break;
        }
        if(x==1&&y==1) pass_candy = true;
    }
    if(pass_candy)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
