#include <stdio.h>

void solve(void)
{
    static const int abc[] = {
        [0]='a',[1]='b',[2]='c'
    };
    char c;
    int e = 0, i = 0;
    while((c=getchar())!='\n'){
        if(c != abc[i++]) ++e;
    }
    if(e==3)
        printf("NO\n");
    else
        printf("YES\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
