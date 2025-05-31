#include <stdio.h>
#include <string.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int i=0,a[n];
    memset(a,0,n*sizeof(a[0]));
    do{
        scanf("%d",&a[0]);
        for(int j = 0; j < n-1; ++j){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }while(getchar()!='\n');
    for(int j = 0; j<n-1; ++j){
        if(a[j]==a[j+1]){
            printf("NO\n");
            return;
        }
    }
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
