#include <stdio.h>

void solve(void)
{
    int s[100] = {0};
    int n;
    scanf("%d",&n)&&getchar();//\n
    int balloons = 0;
    char c;
    while((c=getchar())!='\n'){
        if(c<65||c>90) continue;
        if(s[c] == 1) {
            ++balloons;
            continue;
        }
        if(s[c] == 0){
            s[c] = 1;
            balloons += 2;
        }
    }
    printf("%d\n",balloons);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
