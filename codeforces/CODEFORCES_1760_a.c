#include <stdio.h>
#define SZ 3

void solve(void)
{
    int n[SZ] = {0};
    do{
        scanf("%d", &n[0]);
        for(int i = 0; i < SZ-1; ++i){
            if(n[i] > n[i+1]){
                int temp = n[i+1];
                n[i+1] = n[i];
                n[i] = temp;
            }
        }
    }while(getchar()!='\n');
    printf("%d\n", n[1]);
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();
    while(t--)
        solve();

    return(0);
}
