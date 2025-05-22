#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void solve(void)
{
    int n;
    scanf("%d", &n)&&getchar();//\n

    int a[n]; 
    memset(a,0,n*sizeof(a[0]));
    do{
        scanf("%d",&a[0]);
        for(int i = 0; i < n-1; ++i){
            if(a[i] > a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
    }while(getchar() != '\n');
    
    int i = 0, j = 1, d = 0;
    while(d != n-1){
        if(a[i] == a[j] || abs(a[i]-a[j]) == 1){
            ++i;
            ++j;
            ++d;
        }else{
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
    return;
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    while(t--)
        solve();

    return(0);
}
