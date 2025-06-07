#include <stdio.h>
#define SZ 10

void solve(void)
{
    int len = 0;
    char w[SZ+1] = {'\0'},c;
    while((c=getchar())!='\n')
        w[len++]=c;
    w[len-2]='i';    
    w[len-1]='\0';    
    printf("%s\n",w);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
