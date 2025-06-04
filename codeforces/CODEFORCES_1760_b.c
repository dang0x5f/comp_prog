#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int max = 0, c;
    while((c=getchar())!='\n')
        if(c>max) max = c;
    printf("%d\n",max-'a'+1);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
       solve(); 

    return(0);
}
