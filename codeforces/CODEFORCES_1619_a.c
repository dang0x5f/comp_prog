#include <stdio.h>
#include <stdbool.h>

void solve(void)
{
    int len = 0;
    char c[100] = {'\0'};
    while((c[len++]=getchar())!='\n') ;
    c[--len] = '\0';
    
    if((len%2) != 0){
        printf("NO\n");
        return;
    }
    
    for(int i = 0, j = (len/2); i < (len/2); ++i,++j){
        if(c[i] != c[j]){
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
}
