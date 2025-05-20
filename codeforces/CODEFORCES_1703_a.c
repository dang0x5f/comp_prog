#include <stdio.h>

void solve(void)
{
    int e = 0;
    char yes[3] = {'y','e','s'};

    char c;
    for(int i = 0; i < 3; ++i){
        scanf("%c",&c);
        if(c<97) c += 32;
        if(yes[i] != c) e++;
    }
    getchar();

    printf("%s\n",(e)?"NO":"YES");
    return;
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();


    return(0);
}
