#include <stdio.h>
#include <string.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();

    // fill array, and sort
    int a[n];
    memset(a,0,sizeof(a[0])*n);
    do{
        scanf("%d",&a[0]);
        for(int j=0; j<n-1; ++j){
            if(a[j]>a[j+1]){
                a[j]   = a[j]+a[j+1];
                a[j+1] = a[j]-a[j+1];
                a[j]   = a[j]-a[j+1];
            }else{
                break;
            }
        }
    }while(getchar()!='\n');
    
    // count max values
    int max = a[n-1], bcnt=0, ccnt=0;
    for(int j=n-1; j>=0; --j){
        if(a[j]==max) ++ccnt;
        else break;
    }
    // count == n, all same value
    if(ccnt == n){
        printf("-1\n");
        return;
    }else{
        printf("%d %d\n", n-ccnt, ccnt);
    }

    // print arrayb up to when c starts,
    // then print arrayc
    int j;
    for( j=0; j<n-ccnt; ++j)
        printf("%d ",a[j]);
    printf("\n");
    for(;j<n; ++j)
        printf("%d ",a[j]);
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
