#include <stdio.h>
#define SZ 3

void solve(void)
{
    int xs[SZ]={0},d;
    do{
        scanf("%d",&xs[0]);
        for(int i=0; i<SZ-1; ++i){
            if(xs[i]>xs[i+1]){
                int temp = xs[i+1];
                xs[i+1] = xs[i];
                xs[i] = temp;
            }
        }
    }while(getchar()!='\n');
    printf("%d\n",(xs[1]-xs[0])+(xs[2]-xs[1]));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
