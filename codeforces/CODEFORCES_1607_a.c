#include <stdio.h>
#define SZ 26
#define ABS(a,b) ((a)-(b)<0?-((a)-(b)):(a)-(b))

int find_pos(int *a, int c)
{
    int pos=0;
    for(;pos<SZ;++pos){
        if(a[pos]==c) break;
    }
    return(pos);
}

void solve(void)
{
    int c,i=0,alphabet[SZ];
    while((c=getchar())!='\n')
        alphabet[i++] = c;

    int ans=0, pos=-1, prev=-1;
    while((c=getchar())!='\n'){
        pos = find_pos(alphabet,c);
        if(!(prev<0))
            ans += ABS(pos,prev);
        prev=pos;
    }
    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
