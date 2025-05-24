#include <stdio.h>
#define SZ 4

void solve(void)
{
    char s1[SZ]={'\0'},s2[SZ]={'\0'};
    for(int i=0,j=0; i < 2; ++i,j=0){
        if(i==0){
            scanf("%c",&s1[j++]);
            scanf("%c",&s1[j++]);
            scanf("%c",&s1[j++]);
        }else{
            scanf("%c",&s2[j++]);
            scanf("%c",&s2[j++]);
            scanf("%c",&s2[j++]);
        }
        getchar();//\s\n
    }
    int temp = s2[0];
    s2[0] = s1[0];
    s1[0] = temp;
    printf("%s %s\n",s1,s2);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
