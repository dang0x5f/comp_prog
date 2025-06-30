#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n)&&getchar();
    int a[n],even1=0,even2=0,odd1=0,odd2=0;
    for(int i=0; i<n; ++i){
        scanf("%d",&a[i]);
        if(i%2 == 0){
            if(a[i] % 2 == 1) odd1 = 1;
            else even1 = 1;
        }else{
            if(a[i] % 2 == 1) odd2 = 1;
            else even2 = 1;
        }
    }
    
    if(even1 && odd1){
        printf("NO\n");
    }else if(even2 && odd2){
        printf("NO\n");
    }else{
        printf("YES\n");
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
