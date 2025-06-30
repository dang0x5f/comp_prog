#include <stdio.h>

#define SAKURAKO 0
#define KOSUKE 1
#define ABS(x) (((x)<0)?-(x):(x))
#define MOV(x) ((2*(x))-1)
#define FLIP(x) ((x&1)?0:1)

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int x=0,s=1,turn=SAKURAKO;
    while(ABS(x)<=n){
        x += (turn&1?MOV(s):-MOV(s));
        turn=FLIP(turn);
        ++s;
    }
    printf("%s\n",(FLIP(turn)?"Kosuke":"Sakurako"));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
