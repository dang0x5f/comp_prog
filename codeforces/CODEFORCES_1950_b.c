#include <stdio.h>

void swap(char *c1, char *c2)
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    char c1 = '#', c2 = '.';
    int cntr = 0;
    for(int row=0; row<n*2; ++row){
        for(int col=0; col<n; ++col){
            if(col % 2 == 0)
                printf("%c%c",c1,c1);
            else
                printf("%c%c",c2,c2);
        }
        printf("\n");
        ++cntr;
        if(cntr==2) {
            swap(&c1,&c2);
            cntr = 0;
        }
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
