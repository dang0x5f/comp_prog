#include <stdio.h>
#include <string.h>

int min(int v1, int v2)
{
    return(v1<v2?v1:v2);
}

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();//\n
    int a[n];
    memset(a,0,n*sizeof(a[0]));
    do{
        scanf("%d",&a[0]);
        for(int i=0; i<n-1; ++i){
            if(a[i]>a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }else{
                break;
            } 
        }
    }while(getchar()!='\n');
    int ans = a[n-1] - a[0];
    for(int i=0; i<n-1; ++i){
        ans = min(ans,a[i+1]-a[i]);
    }
    printf("%d\n",ans);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//n
    while(t--)
        solve();

    return(0);
}
