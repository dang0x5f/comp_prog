#include <stdio.h>

int solve(int n)
{
    int ans = 0;

    int max_val = 101, max_idx = -1;
    int min_val = 1  , min_idx = -1;
    for(int i = 1; i <= n; i++){
        int a;
        scanf("%d", &a);
        getchar(); // \s

        if(a <= max_val){
            max_val = a;
            min_idx = i;
        }
        if(a > min_val){
            min_val = a;
            max_idx = i;
        }
    }

    if(max_idx == -1)
        max_idx = 1;

    if(min_idx == -1)
        min_idx = 0;

    ans = (max_idx - 1) + (n - min_idx);
    if(max_idx > min_idx)
        ans--;
    return( ans );
}

int main(void)
{
    int n;
    scanf("%d",&n);
    getchar(); // \n

    printf("%d\n", solve(n));

    return(0);
}
