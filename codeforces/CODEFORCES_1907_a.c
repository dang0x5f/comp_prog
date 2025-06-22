#include <stdio.h>
#define LEN 8
#define L_START 'h'

void solve(void)
{
    char l;
    int n;
    scanf("%c%d",&l,&n)&&getchar();
    for(int i=1; i<=LEN; ++i){
        if(i==n) continue;
        printf("%c%d\n",l,i);
    }

    for(int i=1; i<=LEN; ++i){
        if(L_START-(i-1)==l) continue;
        printf("%c%d\n",L_START-(i-1),n);
    }

}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
