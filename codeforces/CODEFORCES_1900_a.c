#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int seq=0,cnt=0,seq3=0,c;
    while((c=getchar())!='\n'){
        switch(c){
            case'.':
                ++seq;
                ++cnt;
                seq3=(seq==3&&seq3==0?1:seq3);
                break;
            default:
                seq=0;
                break;
        }
    }
    printf("%d\n",(seq3?2:cnt));
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
