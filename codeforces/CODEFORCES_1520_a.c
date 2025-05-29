#include <stdio.h>
#include <stdbool.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n

    int a[91] = {0};
    char c, p;
    bool err = false;
    while((c=getchar())!='\n'){
        if(c != p){
            if(a[c] == 1) err = true;
            a[p] = 1;
        }
        p = c;
    }
    if(err)
        printf("NO\n");
    else
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
