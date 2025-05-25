#include <stdio.h>

void solve(int *w)
{
    int mi,ci;
    scanf("%d %d",&mi,&ci)&&getchar();//\n
    if(mi > ci) 
        --(*w);
    else if(mi < ci) 
        ++(*w);
}

int main(void)
{
    int n,w = 0;
    scanf("%d",&n)&&getchar();
    while(n--)
        solve(&w);
    if(w<0)
        printf("Mishka\n");
    else if(w>0)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return(0);
}
