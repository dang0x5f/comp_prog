#include <stdio.h>
#define SZ 3

void solve(void)
{
    int abc[SZ] = {0};
    for(int i = 0; i < SZ; ++i){
        int d;
        scanf("%d",&d)&&getchar();//\s\n
        abc[0] = d;
        for(int j = 0; j < SZ-1; ++j){
            if(abc[j] > abc[j+1]){
                int temp = abc[j+1];
                abc[j+1] = abc[j];
                abc[j] = temp;
            }
        }
    }
    printf("%s\n", ( (abc[0]+abc[1]) == abc[2] ) ? "YES" : "NO");
}

int main(void)
{
    int t;
    scanf("%d",&t)&&getchar();//\n
    
    while(t--)
        solve();

    return(0);
}
