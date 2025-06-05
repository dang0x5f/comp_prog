#include <stdio.h>

#define COL 4

void solve(void)
{
    int row;
    scanf("%d",&row)&&getchar();
    int c, a[row];
    for(int i=0;i<row;++i){
        for(int j=0;j<COL;++j){
            if((c=getchar())=='#')
                a[i] = j+1;//0-based idx
        }
        getchar();//\n
    }
    while(--row >= 0)
        printf("%d ", a[row]);
    printf("\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
