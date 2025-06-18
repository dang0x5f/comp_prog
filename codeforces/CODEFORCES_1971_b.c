#include <stdio.h>
#include <stdbool.h>
#define SZ 10

void solve(void)
{
    int a[SZ+1]={0}, l=0, c;
    while((c=getchar())!='\n')
        a[l++] = c;

    bool same = true;
    for(int i=1; i<l; ++i){
        if(a[0]!=a[i]){
            a[0] = a[0]+a[i];
            a[i] = a[0]-a[i];
            a[0] = a[0]-a[i];
            same=false;
            break;
        }
    }
    
    if(!same){
        printf("YES\n");
        for(int i=0; i<l; ++i) 
            printf("%c",a[i]);
        printf("\n");
    }else{
        printf("NO\n");
    }
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
