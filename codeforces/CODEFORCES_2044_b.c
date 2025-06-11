#include <stdio.h>
#define SZ 100

void solve(void)
{
    int i = 0;
    char s[SZ+1]={'\0'},c;
    while((c=getchar())!='\n')
        s[i++] = c;
    for(int j=i-1; j>=0; --j){
        switch(s[j]){
            case'p': printf("q");break;
            case'q': printf("p");break;
            default: printf("w");break;
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
