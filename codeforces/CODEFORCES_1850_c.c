#include <stdio.h>

void solve(void)
{
    int row = 8; 
    char c;
    while(row--){
        while((c=getchar())!='\n'){
            if(c != '.')
                printf("%c",c);
        }
    }
    printf("\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
