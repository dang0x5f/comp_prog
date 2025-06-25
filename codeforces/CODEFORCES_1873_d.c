#include <stdio.h>

void solve(void)
{
    int n,k;
    scanf("%d %d",&n,&k)&&getchar();
    char a[n];
    for(int i=0; i<n; ++i)
        scanf("%c",&a[i]);
    int t=0, fwd=k-1;
    for(int i=0; i<n; ++i){
        if(i>=n-fwd-1){
            for(int j=i; j<n; ++j){
                if(a[j]=='B'){
                    ++t;
                    i = n-1;
                    break;
                }
            }
        }else if(a[i]=='B'){
            ++t;
            i += fwd;
        }
    }
    printf("%d\n",t);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
