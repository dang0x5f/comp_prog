#include <stdio.h>
#include <stdbool.h>
#define LEN 5

void solve(void)
{
    int s[128] = {
        ['T'] = 1, ['i'] = 1, ['m'] = 1,
        ['u'] = 1, ['r'] = 1
    };
    int s2[128] = {0};
    int n;
    bool err = false;
    scanf("%d",&n)&&getchar();//\n
    if(n != LEN)
        err = true;
    char c;
    while((c=getchar())!='\n'){
        if(s[c] != 1){
            err = true;
        } else {
            if(s2[c] == 1)
                err = true;
            else
                s2[c] = 1;
        }
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
