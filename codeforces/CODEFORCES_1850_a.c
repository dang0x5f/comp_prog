#include <stdio.h>

void solve(void)
{
    int abc[3] = {0};
    scanf("%d", &abc[0])&&getchar();//\s
    for(int i = 1; i < 3; ++i){
        scanf("%d", &abc[i])&&getchar();//\s
    }
    if(abc[0]+abc[1] >= 10 || abc[0]+abc[2] >= 10 || abc[1]+abc[2] >= 10){
        printf("YES\n");
        return;
    }
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
