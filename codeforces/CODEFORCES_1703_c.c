#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n];
    for(int i=0; i<n; ++i) 
        scanf("%d",&a[i])&&getchar();
    
    for(int i=0; i<n; ++i){
        int m, c;
        scanf("%d",&m)&&getchar();
        while((c=getchar())!='\n'){
            if(c=='U'){
                if(a[i]==0) a[i]=9;
                else --a[i];
            }else{
                if(a[i]==9) a[i]=0;
                else ++a[i];
            }
        }
        printf("%d ",a[i]);
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
