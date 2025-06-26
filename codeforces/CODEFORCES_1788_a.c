#include <stdio.h>
#define ONES 0
#define TWOS 1

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n], d[2]={0}, i=0;
    do{
        scanf("%d",&a[i]);
        if(a[i]==1) d[ONES] += 1;
        else d[TWOS] += 1;
        ++i;
    }while(getchar()!='\n');

    if(d[TWOS] & 1){
        printf("-1\n");
    }else{
        if(d[TWOS]){
            int i,cnt=0, half = d[TWOS]/2;
            for(i=0; i<n; ++i){
                if(a[i]==2) ++cnt;
                if(cnt==half) break;
            }
            printf("%d\n",i+1);
        }else{
            printf("1\n");
        }
    }
    
    /* printf("%d\n",(p1!=p2?-1:l)); */
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
