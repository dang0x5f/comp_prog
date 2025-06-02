#include <stdio.h>

void read_row(char row[])
{
    int i = 0;
    char c;
    while((c=getchar()) != '\n')
        row[i++] = c;
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    char row1[n],row2[n];
    read_row(row1);
    read_row(row2);
    while(--n >= 0){
        if( (row1[n] == 'R' && row2[n] != 'R') ||
            (row2[n] == 'R' && row1[n] != 'R') ){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
