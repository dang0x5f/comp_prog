#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n];
    for(int i=0; i<n; ++i) 
        scanf("%d",&a[i])&&getchar();
    int left=a[0], right=a[0];
    for(int i=1; i<n; ++i){
        if(a[i]+1 == left) left = a[i];
        else if(a[i]-1 == right) right = a[i];
        else{
            printf("No\n");
            return;
        }
    }
    printf("Yes\n");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
