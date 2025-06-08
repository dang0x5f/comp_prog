#include <stdio.h>
#define MATRIX_SIDE 3

void solve(void)
{
    int t = 'A' + 'B' + 'C';
    for(int i=0;i<MATRIX_SIDE;++i){
        int c, s = 0;
        while((c=getchar())!='\n'){
            if(c != '?') s += c;
        }
        if(t - s) printf("%c\n",(char)t-s);
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
